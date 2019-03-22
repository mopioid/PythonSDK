#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerSaveGame(py::module &m)
{
    py::class_< UPlayerSaveGame,  UObject   >(m, "UPlayerSaveGame")
        .def_readwrite("UIPreferences", &UPlayerSaveGame::UIPreferences)
        .def_readwrite("PlayerClassDefinition", &UPlayerSaveGame::PlayerClassDefinition)
        .def_readwrite("ExpLevel", &UPlayerSaveGame::ExpLevel)
        .def_readwrite("ExpPoints", &UPlayerSaveGame::ExpPoints)
        .def_readwrite("GeneralSkillPoints", &UPlayerSaveGame::GeneralSkillPoints)
        .def_readwrite("SpecialistSkillPoints", &UPlayerSaveGame::SpecialistSkillPoints)
        .def_readwrite("PlaythroughsCompleted", &UPlayerSaveGame::PlaythroughsCompleted)
        .def_readwrite("SkillData", &UPlayerSaveGame::SkillData)
        .def_readwrite("ResourceData", &UPlayerSaveGame::ResourceData)
        .def_readwrite("ItemData", &UPlayerSaveGame::ItemData)
        .def_readwrite("UnloadableDlcItemData", &UPlayerSaveGame::UnloadableDlcItemData)
        .def_readwrite("InventorySlotData", &UPlayerSaveGame::InventorySlotData)
        .def_readwrite("WeaponData", &UPlayerSaveGame::WeaponData)
        .def_readwrite("UnloadableDlcWeaponData", &UPlayerSaveGame::UnloadableDlcWeaponData)
        .def_readwrite("MissionPlaythroughs", &UPlayerSaveGame::MissionPlaythroughs)
        .def_readwrite("StatsData", &UPlayerSaveGame::StatsData)
        .def_readwrite("VisitedTeleporters", &UPlayerSaveGame::VisitedTeleporters)
        .def_readwrite("LastVisitedTeleporter", &UPlayerSaveGame::LastVisitedTeleporter)
        .def_readwrite("SaveGameId", &UPlayerSaveGame::SaveGameId)
        .def_readwrite("SaveVersion", &UPlayerSaveGame::SaveVersion)
        .def_readwrite("PlotMissionNumber", &UPlayerSaveGame::PlotMissionNumber)
        .def_readwrite("ActiveMissionNumber", &UPlayerSaveGame::ActiveMissionNumber)
        .def_readwrite("UsedMarketingCodes", &UPlayerSaveGame::UsedMarketingCodes)
        .def_readwrite("MarketingCodesNeedingNotification", &UPlayerSaveGame::MarketingCodesNeedingNotification)
        .def_readwrite("TotalPlayTime", &UPlayerSaveGame::TotalPlayTime)
        .def_readwrite("LastSavedDate", &UPlayerSaveGame::LastSavedDate)
        .def_readwrite("DLCExpansionData", &UPlayerSaveGame::DLCExpansionData)
        .def_readwrite("ChallengeList", &UPlayerSaveGame::ChallengeList)
        .def_readwrite("UnloadableDlcChallengeList", &UPlayerSaveGame::UnloadableDlcChallengeList)
        .def_readwrite("RegionGameStages", &UPlayerSaveGame::RegionGameStages)
        .def_readwrite("UnloadableDlcRegionGameStages", &UPlayerSaveGame::UnloadableDlcRegionGameStages)
        .def_readwrite("WorldDiscoveryList", &UPlayerSaveGame::WorldDiscoveryList)
        .def_readwrite("BlackMarketUpgrades", &UPlayerSaveGame::BlackMarketUpgrades)
        .def_readwrite("SaveGuid", &UPlayerSaveGame::SaveGuid)
        .def_readwrite("LevelChallengeUnlocks", &UPlayerSaveGame::LevelChallengeUnlocks)
        .def_readwrite("OneOffLevelChallengeCompletion", &UPlayerSaveGame::OneOffLevelChallengeCompletion)
        .def_readwrite("MaxBankSlots", &UPlayerSaveGame::MaxBankSlots)
        .def_readwrite("BankSlots", &UPlayerSaveGame::BankSlots)
        .def_readwrite("NumChallengePrestiges", &UPlayerSaveGame::NumChallengePrestiges)
        .def_readwrite("LockoutList", &UPlayerSaveGame::LockoutList)
        .def_readwrite("UnloadableDlcLockoutList", &UPlayerSaveGame::UnloadableDlcLockoutList)
        .def_readwrite("DLCPlayerClassPackageId", &UPlayerSaveGame::DLCPlayerClassPackageId)
        .def_readwrite("FullyExploredAreas", &UPlayerSaveGame::FullyExploredAreas)
        .def_readwrite("NumGoldenKeysNotified", &UPlayerSaveGame::NumGoldenKeysNotified)
        .def_readwrite("LastPlaythroughNumber", &UPlayerSaveGame::LastPlaythroughNumber)
        .def_readwrite("QueuedTrainingMessages", &UPlayerSaveGame::QueuedTrainingMessages)
        .def_readwrite("NumOverpowerLevelsUnlocked", &UPlayerSaveGame::NumOverpowerLevelsUnlocked)
        .def_readwrite("LastOverpowerChoice", &UPlayerSaveGame::LastOverpowerChoice)
        .def_readwrite("ChosenVehicleCustomizations", &UPlayerSaveGame::ChosenVehicleCustomizations)
        .def("StaticClass", &UPlayerSaveGame::StaticClass, py::return_value_policy::reference)
          ;
}