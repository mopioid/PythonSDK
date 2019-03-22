#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APlayerReplicationInfo(py::module &m)
{
    py::class_< APlayerReplicationInfo,  AInfo   >(m, "APlayerReplicationInfo")
        .def_readwrite("Score", &APlayerReplicationInfo::Score)
        .def_readwrite("Deaths", &APlayerReplicationInfo::Deaths)
        .def_readwrite("Ping", &APlayerReplicationInfo::Ping)
        .def_readwrite("TTSSpeaker", &APlayerReplicationInfo::TTSSpeaker)
        .def_readwrite("NumLives", &APlayerReplicationInfo::NumLives)
        .def_readwrite("PlayerName", &APlayerReplicationInfo::PlayerName)
        .def_readwrite("PlayerNameHTML", &APlayerReplicationInfo::PlayerNameHTML)
        .def_readwrite("OldName", &APlayerReplicationInfo::OldName)
        .def_readwrite("PlayerID", &APlayerReplicationInfo::PlayerID)
        .def_readwrite("Team", &APlayerReplicationInfo::Team)
        .def_readwrite("StartTime", &APlayerReplicationInfo::StartTime)
        .def_readwrite("StringSpectating", &APlayerReplicationInfo::StringSpectating)
        .def_readwrite("StringUnknown", &APlayerReplicationInfo::StringUnknown)
        .def_readwrite("Kills", &APlayerReplicationInfo::Kills)
        .def_readwrite("GameMessageClass", &APlayerReplicationInfo::GameMessageClass)
        .def_readwrite("ExactPing", &APlayerReplicationInfo::ExactPing)
        .def_readwrite("SavedNetworkAddress", &APlayerReplicationInfo::SavedNetworkAddress)
        .def_readwrite("UniqueId", &APlayerReplicationInfo::UniqueId)
        .def_readwrite("SessionName", &APlayerReplicationInfo::SessionName)
        .def_readwrite("AutomatedTestingData", &APlayerReplicationInfo::AutomatedTestingData)
        .def_readwrite("StatConnectionCounts", &APlayerReplicationInfo::StatConnectionCounts)
        .def_readwrite("StatPingTotals", &APlayerReplicationInfo::StatPingTotals)
        .def_readwrite("StatPingMin", &APlayerReplicationInfo::StatPingMin)
        .def_readwrite("StatPingMax", &APlayerReplicationInfo::StatPingMax)
        .def_readwrite("StatPKLTotal", &APlayerReplicationInfo::StatPKLTotal)
        .def_readwrite("StatPKLMin", &APlayerReplicationInfo::StatPKLMin)
        .def_readwrite("StatPKLMax", &APlayerReplicationInfo::StatPKLMax)
        .def_readwrite("StatMaxInBPS", &APlayerReplicationInfo::StatMaxInBPS)
        .def_readwrite("StatAvgInBPS", &APlayerReplicationInfo::StatAvgInBPS)
        .def_readwrite("StatMaxOutBPS", &APlayerReplicationInfo::StatMaxOutBPS)
        .def_readwrite("StatAvgOutBPS", &APlayerReplicationInfo::StatAvgOutBPS)
        .def_readwrite("Avatar", &APlayerReplicationInfo::Avatar)
        .def("StaticClass", &APlayerReplicationInfo::StaticClass, py::return_value_policy::reference)
        .def("HandlePlayerJoinWithValidName", &APlayerReplicationInfo::HandlePlayerJoinWithValidName)
        .def("UnregisterPlayerFromSession", &APlayerReplicationInfo::UnregisterPlayerFromSession)
        .def("RegisterPlayerWithSession", &APlayerReplicationInfo::RegisterPlayerWithSession)
        .def("IsInvalidName", &APlayerReplicationInfo::IsInvalidName)
        .def("GetTeamNum", &APlayerReplicationInfo::GetTeamNum)
        .def("SetUniqueId", &APlayerReplicationInfo::SetUniqueId)
        .def("SeamlessTravelTo", &APlayerReplicationInfo::SeamlessTravelTo)
        .def("IncrementDeaths", &APlayerReplicationInfo::IncrementDeaths)
        .def("CopyProperties", &APlayerReplicationInfo::CopyProperties)
        .def("OverrideWith", &APlayerReplicationInfo::OverrideWith)
        .def("Duplicate", &APlayerReplicationInfo::Duplicate, py::return_value_policy::reference)
        .def("SetWaitingPlayer", &APlayerReplicationInfo::SetWaitingPlayer)
        .def("eventSetPlayerName", &APlayerReplicationInfo::eventSetPlayerName)
        .def("eventGetHumanReadableHTMLName", &APlayerReplicationInfo::eventGetHumanReadableHTMLName)
        .def("GetHumanReadableName", &APlayerReplicationInfo::GetHumanReadableName)
        .def("Reset", &APlayerReplicationInfo::Reset)
        .def("eventDestroyed", &APlayerReplicationInfo::eventDestroyed)
        .def("ShouldBroadCastWelcomeMessage", &APlayerReplicationInfo::ShouldBroadCastWelcomeMessage)
        .def("UpdatePing", &APlayerReplicationInfo::UpdatePing)
        .def("eventReplicatedEvent", &APlayerReplicationInfo::eventReplicatedEvent)
        .def("SetPlayerTeam", &APlayerReplicationInfo::SetPlayerTeam)
        .def("ClientInitialize", &APlayerReplicationInfo::ClientInitialize)
        .def("eventPostBeginPlay", &APlayerReplicationInfo::eventPostBeginPlay)
          ;
}