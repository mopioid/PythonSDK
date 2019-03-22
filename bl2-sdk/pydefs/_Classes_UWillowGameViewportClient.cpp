#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGameViewportClient(py::module &m)
{
    py::class_< UWillowGameViewportClient,  UGameViewportClient   >(m, "UWillowGameViewportClient")
        .def_readwrite("ViewportUI", &UWillowGameViewportClient::ViewportUI)
        .def_readwrite("LoadBackground", &UWillowGameViewportClient::LoadBackground)
        .def_readwrite("LoadingImage", &UWillowGameViewportClient::LoadingImage)
        .def_readwrite("SubtitleProfileDefault", &UWillowGameViewportClient::SubtitleProfileDefault)
        .def_readwrite("SubtitleProfileSplitScreenVertical", &UWillowGameViewportClient::SubtitleProfileSplitScreenVertical)
        .def_readwrite("SubtitleProfileSplitScreenHorizontal", &UWillowGameViewportClient::SubtitleProfileSplitScreenHorizontal)
        .def_readwrite("SubtitleProfileCinematic", &UWillowGameViewportClient::SubtitleProfileCinematic)
        .def("StaticClass", &UWillowGameViewportClient::StaticClass, py::return_value_policy::reference)
        .def("eventTick", &UWillowGameViewportClient::eventTick)
        .def("TryNotifyDeviceSelectionComplete", &UWillowGameViewportClient::TryNotifyDeviceSelectionComplete)
        .def("DeviceSelectionDone", &UWillowGameViewportClient::DeviceSelectionDone)
        .def("NotifyDeviceSelectionStarted", &UWillowGameViewportClient::NotifyDeviceSelectionStarted)
        .def("SetPCSplitscreenEnabled", &UWillowGameViewportClient::SetPCSplitscreenEnabled)
        .def("IsPCSplitscreenEnabled", &UWillowGameViewportClient::IsPCSplitscreenEnabled)
        .def("PlatformSupportsSplitscreen", &UWillowGameViewportClient::PlatformSupportsSplitscreen)
        .def("OnEndGameForReturnToTitleComplete", &UWillowGameViewportClient::OnEndGameForReturnToTitleComplete)
        .def("ReturnToTitleScreenNoPC", &UWillowGameViewportClient::ReturnToTitleScreenNoPC)
        .def("NotifyConnectionError", &UWillowGameViewportClient::NotifyConnectionError)
        .def("ShouldIgnoreNetworkErrors", &UWillowGameViewportClient::ShouldIgnoreNetworkErrors)
        .def("IsWidescreen", &UWillowGameViewportClient::IsWidescreen)
        .def("SplitScreenLeave", &UWillowGameViewportClient::SplitScreenLeave)
        .def("CanSplitScreenLeave", &UWillowGameViewportClient::CanSplitScreenLeave)
        .def("eventUpdateSplitscreenConfiguration", &UWillowGameViewportClient::eventUpdateSplitscreenConfiguration)
        .def("eventSplitScreenJoin", &UWillowGameViewportClient::eventSplitScreenJoin, py::return_value_policy::reference)
        .def("CanSplitScreenJoin", &UWillowGameViewportClient::CanSplitScreenJoin)
        .def("RenderHeader", &UWillowGameViewportClient::RenderHeader)
        .def("eventPostRender", &UWillowGameViewportClient::eventPostRender)
        .def("eventGameSessionEnded", &UWillowGameViewportClient::eventGameSessionEnded)
        .def("AreHudMoviesVisible", &UWillowGameViewportClient::AreHudMoviesVisible)
        .def("eventGetSubtitleRegion", &UWillowGameViewportClient::eventGetSubtitleRegion)
        .def("UpdateActiveSplitscreenType", &UWillowGameViewportClient::UpdateActiveSplitscreenType)
        .def("eventSetSplitscreenConfiguration", &UWillowGameViewportClient::eventSetSplitscreenConfiguration)
        .def("HasLoginStateChanged", &UWillowGameViewportClient::HasLoginStateChanged)
        .def("SaveLoginState", &UWillowGameViewportClient::SaveLoginState)
        .def("InitializeCurrentLoginState", &UWillowGameViewportClient::InitializeCurrentLoginState)
        .def("NotifyLoginChanged", &UWillowGameViewportClient::NotifyLoginChanged)
        .def("RemovedDlcDependantMU", &UWillowGameViewportClient::RemovedDlcDependantMU)
        .def("RemovedDlcDependantMUFrontend", &UWillowGameViewportClient::RemovedDlcDependantMUFrontend)
        .def("TryNotifyStorageDeviceChanged", &UWillowGameViewportClient::TryNotifyStorageDeviceChanged)
        .def("NotifyStorageDeviceChange", &UWillowGameViewportClient::NotifyStorageDeviceChange)
        .def("ReturnToTitleForDlcInstall_Clicked", &UWillowGameViewportClient::ReturnToTitleForDlcInstall_Clicked)
        .def("RegisterMarketingUnlocksFromDlc", &UWillowGameViewportClient::RegisterMarketingUnlocksFromDlc)
        .def("NotifyDlcRefreshComplete", &UWillowGameViewportClient::NotifyDlcRefreshComplete)
        .def("eventRemovePlayer", &UWillowGameViewportClient::eventRemovePlayer)
        .def("eventCreatePlayer", &UWillowGameViewportClient::eventCreatePlayer, py::return_value_policy::reference)
        .def("InputAxis", &UWillowGameViewportClient::InputAxis)
        .def("InputKey", &UWillowGameViewportClient::InputKey)
        .def("eventDlcManagerCreatedInit", &UWillowGameViewportClient::eventDlcManagerCreatedInit)
        .def("eventInit", &UWillowGameViewportClient::eventInit)
        .def("OpenMapMenu", &UWillowGameViewportClient::OpenMapMenu)
          ;
}