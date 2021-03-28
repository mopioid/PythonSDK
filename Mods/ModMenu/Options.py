from __future__ import annotations

from abc import ABC, abstractmethod
from reprlib import recursive_repr
from inspect import signature
from typing import Any, Callable, Generic, Optional, Sequence, Tuple, TypeVar, Union

from . import ModObjects
from . import DeprecationHelper as dh

__all__: Tuple[str, ...] = (
    "Base",
    "Boolean",
    "Field",
    "Hidden",
    "Nested",
    "Slider",
    "Spinner",
    "Value",
    "OptionCallback",
    "OptionCallbackMethod",
)

T = TypeVar("T")

OptionCallback = Union[Callable[[T], None], Callable[[T, T], None]]
OptionCallbackMethod = Union[Callable[[Any, T], None], Callable[[Any, T, T], None]]


class Base(ABC):
    """
    The abstract base class all options inherit from.

    Attributes:
        Caption: The name of the option.
        Description: A short description of the option to show when hovering over it in the menu.
        IsHidden: If the option is hidden from the options menu.
    """
    Caption: str
    Description: str
    IsHidden: bool

    @abstractmethod
    def __init__(
        self,
        Caption: str,
        Description: str = "",
        *,
        IsHidden: bool = True
    ) -> None:
        raise NotImplementedError


class Value(Base, Generic[T]):
    """
    The abstract base class for all options that store a value.

    Attributes:
        Caption: The name of the option.
        Description: A short description of the option to show when hovering over it in the menu.

        CurrentValue: The current value of the option.
        StartingValue: The default value of the option.

        IsHidden: If the option is hidden from the options menu.

        OnChange:
            A callback for when the option's value is changed. If provided, it will be called
             instead of the mod's `ModOptionChanged`. The new value will be passed as the first
             argument. If it accepts a second argument, it will get passed the option's old value.
    """
    CurrentValue: T
    StartingValue: T

    OnChange: Optional[Union[OptionCallback, OptionCallbackMethod]] = None

    @abstractmethod
    def __init__(
        self,
        Caption: str,
        Description: str,
        StartingValue: T,
        *,
        IsHidden: bool = True
    ) -> None:
        raise NotImplementedError

    def ChangingForMod(self, mod: ModObjects.SDKMod, new_value: T) -> None:
        # If we do not have an OnChange method, invoke the default one on the mod instance.
        if self.OnChange is None:
            mod.ModOptionChanged(self, new_value)
            return
        # If our callback is a class or instance method, bind it appropriately.
        if isinstance(self.OnChange, classmethod):
            onchange = self.OnChange.__get__(type(mod), type(mod))
        elif getattr(self.OnChange, "_is_method", False):
            onchange = self.OnChange.__get__(mod, type(mod))
        else:
            onchange = self.OnChange
        # If the callback only has one parameter, do not pass the old value.
        if len(signature(onchange).parameters) == 1:
            onchange(new_value)
        else:
            onchange(new_value, self.CurrentValue)

    def __call__(
        self,
        function: Union[OptionCallback, OptionCallbackMethod]
    ) -> Union[OptionCallback, OptionCallbackMethod]:
        """
        Decorate the provided function with this Option, assigning it as the Option's `OnChange`
        function.

        Args:
            function:
                The function to be decorated. If the function is a member of a mod class, the
                Option will be added to the mod class's `Options` list. If it is an instance
                method, the instance will be passed to the `self` parameter on invokation.
        Returns:
            The original function.
        """
        # Unfortunately we must create a circular reference here; We need to keep a strong reference
        # to OnChange functions to retain user assigned ones, and the function also must keep a
        # strong reference to this object to retain it for metaclass initialization.
        self.OnChange = function
        function._option = self
        return function


class Hidden(Value[T]):
    """
    A hidden option that never displays in the menu but stores an arbitrary (json serializable)
     value to the settings file.

    Attributes:
        Caption: The name of the option.
        Description:
            A short description of the option to show when hovering over it in the menu. This is
             inherited, it is useless.
        CurrentValue: The current value of the option.
        StartingValue: The default value of the option.
        IsHidden: If the option is hidden from the options menu. This is forced to True.
    """

    def __init__(
        self,
        Caption: str,
        Description: str = "",
        StartingValue: T = None,  # type: ignore
        *,
        IsHidden: bool = True
    ) -> None:
        """
        Creates the option.

        Args:
            Caption: The name of the option.
            Description:
                A short description of the option to show when hovering over it in the menu. This is
                 inherited, it is useless.
            StartingValue: The default value of the option.

            IsHidden (keyword only):
                If the option is hidden from the options menu. This is forced to True.
        """
        self.Caption = Caption
        self.Description = Description
        self.CurrentValue = StartingValue
        self.StartingValue = StartingValue
        self.IsHidden = IsHidden

    @property  # type: ignore
    def IsHidden(self) -> bool:  # type: ignore
        return True

    @IsHidden.setter
    def IsHidden(self, val: bool) -> None:
        pass

    @recursive_repr()
    def __repr__(self) -> str:
        return (
            f"Hidden("
            f"Caption={repr(self.Caption)},"
            f"Description={repr(self.Description)},"
            f"*,IsHidden={repr(self.IsHidden)}"
            f")"
        )


class Slider(Value[int]):
    """
    An option which allows users to select a value along a slider.

    Note that, while you can give this float inputs, the game will only return integers.

    Attributes:
        Caption: The name of the option.
        Description: A short description of the option to show when hovering over it in the menu.
        CurrentValue: The current value of the option.
        StartingValue: The default value of the option.

        MinValue: The minimum selectable value on the slider.
        MaxValue: The maximum selectable value on the slider.
        Increment: The minimum amount a value on the slider can be changed by.

        IsHidden: If the option is hidden from the options menu.
    """
    CurrentValue: int
    StartingValue: int
    MinValue: int
    MaxValue: int
    Increment: int

    def __init__(
        self,
        Caption: str,
        Description: str,
        StartingValue: int,
        MinValue: int,
        MaxValue: int,
        Increment: int,
        *,
        IsHidden: bool = False
    ):
        """
        Creates the option.

        Args:
            Caption: The name of the option.
            Description:
                A short description of the option to show when hovering over it in the menu.
            StartingValue: The default value of the option.

            MinValue: The minimum selectable value on the slider.
            MaxValue: The maximum selectable value on the slider.
            Increment: The minimum amount a value on the slider can be changed by.

            IsHidden (keyword only): If the option is hidden from the options menu.
        """
        self.Caption = Caption
        self.Description = Description
        self.CurrentValue = StartingValue
        self.StartingValue = StartingValue
        self.MinValue = MinValue
        self.MaxValue = MaxValue
        self.Increment = Increment
        self.IsHidden = IsHidden

    @recursive_repr()
    def __repr__(self) -> str:
        return (
            f"Slider("
            f"Caption={repr(self.Caption)},"
            f"Description={repr(self.Description)},"
            f"CurrentValue={repr(self.CurrentValue)},"
            f"StartingValue={repr(self.StartingValue)},"
            f"MinValue={repr(self.MinValue)},"
            f"MaxValue={repr(self.MaxValue)},"
            f"Increment={repr(self.Increment)},"
            f"*,IsHidden={repr(self.IsHidden)}"
            f")"
        )


class Spinner(Value[str]):
    """
    An option which allows users to select one value from a sequence of strings.

    Attributes:
        Caption: The name of the option.
        Description: A short description of the option to show when hovering over it in the menu.
        CurrentValue: The currently selected string.
        StartingValue: The string selected by default.

        Choices: A sequence of strings to be used as the choices.

        IsHidden: If the option is hidden from the options menu.
    """
    CurrentValue: str
    StartingValue: str
    Choices: Sequence[str]

    def __init__(
        self,
        Caption: str,
        Description: str,
        StartingValue: Optional[str] = None,
        Choices: Optional[Sequence[str]] = None,
        *,
        IsHidden: bool = False,
        StartingChoice: Optional[str] = None
    ):
        """
        Creates the option.

        Args:
            Caption: The name of the option.
            Description:
                A short description of the option to show when hovering over it in the menu.
            StartingValue: The string selected by default.

            Choices: A sequence of strings to be used as the choices.

            IsHidden (keyword only): If the option is hidden from the options menu.
        """
        self.Caption = Caption
        self.Description = Description
        self.IsHidden = IsHidden

        if StartingValue is not None:
            self.StartingValue = StartingValue
            self.CurrentValue = StartingValue
        elif StartingChoice is not None:
            dh.PrintWarning(dh.NameChangeMsg("Spinner.StartingChoice", "Spinner.StartingValue"))
            self.StartingValue = StartingChoice
            self.CurrentValue = StartingChoice
        else:
            raise TypeError("__init__() missing 1 required positional argument: 'StartingValue'")

        if Choices is None:
            raise TypeError("__init__() missing 1 required positional argument: 'Choices'")
        else:
            self.Choices = Choices

        if self.StartingValue not in self.Choices:
            raise ValueError(
                f"Provided starting value '{self.StartingValue}' is not in the list of choices."
            )

    @recursive_repr()
    def __repr__(self) -> str:
        return (
            f"Spinner("
            f"Caption={repr(self.Caption)},"
            f"Description={repr(self.Description)},"
            f"CurrentValue={repr(self.CurrentValue)},"
            f"StartingValue={repr(self.StartingValue)},"
            f"Choices={repr(self.Choices)},"
            f"*,IsHidden={repr(self.IsHidden)}"
            f")"
        )


class Boolean(Spinner, Value[bool]):
    """
    A special form of a spinner, with two options representing boolean values.

    Attributes:
        Caption: The name of the option.
        Description: A short description of the option to show when hovering over it in the menu.
        CurrentValue: The currently value, as a boolean.
        StartingValue: The default value, as a boolean.

        Choices: A tuple of two strings to be used as the choices.

        IsHidden: If the option is hidden from the options menu.
    """
    StartingValue: bool  # type: ignore
    Choices: Tuple[str, str]

    _current_value: bool

    def __init__(
        self,
        Caption: str,
        Description: str,
        StartingValue: bool,
        Choices: Tuple[str, str] = ("Off", "On"),
        *,
        IsHidden: bool = False
    ):
        """
        Creates the option.

        Args:
            Caption: The name of the option.
            Description:
                A short description of the option to show when hovering over it in the menu.
            StartingValue: The string selected by default.

            Choices: A sequence of strings to be used as the choices.

            IsHidden (keyword only): If the option is hidden from the options menu.
        """
        self.Caption = Caption
        self.Description = Description
        self.StartingValue = StartingValue
        self.IsHidden = IsHidden

        self.Choices = Choices
        self.CurrentValue = StartingValue

        if len(self.Choices) != 2:
            raise ValueError(
                f"Invalid amount of choices passed to boolean option, expected 2 not"
                f" {len(self.Choices)}."
            )

    @property  # type: ignore
    def CurrentValue(self) -> bool:  # type: ignore
        return self._current_value

    @CurrentValue.setter
    def CurrentValue(self, val: Any) -> None:
        if val in self.Choices:
            self._current_value = bool(self.Choices.index(val))
        else:
            self._current_value = bool(val)

    @recursive_repr()
    def __repr__(self) -> str:
        return (
            f"Boolean("
            f"Caption={repr(self.Caption)},"
            f"Description={repr(self.Description)},"
            f"CurrentValue={repr(self.CurrentValue)},"
            f"StartingValue={repr(self.StartingValue)},"
            f"Choices={repr(self.Choices)},"
            f"*,IsHidden={repr(self.IsHidden)}"
            f")"
        )


class Field(Base):
    """
    A field which displays in the options list but holds no value.

    Attributes:
        Caption: The name of the field.
        Description: A short description of the field to show when hovering over it in the menu.
        IsHidden: If the field is hidden from the options menu.
    """


class Nested(Field):
    """
    A field which when clicked opens up a nested menu with more options.

    Note that these fields will be disabled if all child options are either hidden or other disabled
     nested fields.

    Attributes:
        Caption: The name of the field.
        Description: A short description of the field to show when hovering over it in the menu.

        Children: A sequence of child options to display in the nested menu.

        IsHidden: If the field is hidden from the options menu.
    """
    Children: Sequence[Base]

    def __init__(
        self,
        Caption: str,
        Description: str,
        Children: Sequence[Base],
        *,
        IsHidden: bool = False
    ) -> None:
        """
        Creates the option.

        Args:
            Caption: The name of the option.
            Description: A short description of the option to show when hovering over it in the menu.

            Children: A sequence of child options to display in the nested menu.

            IsHidden (keyword only): If the value is hidden from the options menu.
        """
        self.Caption = Caption
        self.Description = Description
        self.Children = Children
        self.IsHidden = IsHidden

    @recursive_repr()
    def __repr__(self) -> str:
        return (
            f"Nested("
            f"Caption={repr(self.Caption)},"
            f"Description={repr(self.Description)},"
            f"Children={repr(self.Children)},"
            f"*,IsHidden={repr(self.IsHidden)}"
            f")"
        )
