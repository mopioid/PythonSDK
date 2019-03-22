#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AAccessControl(py::module &m)
{
    py::class_< AAccessControl,  AInfo   >(m, "AAccessControl")
        .def_readwrite("IPPolicies", &AAccessControl::IPPolicies)
        .def_readwrite("BannedIDs", &AAccessControl::BannedIDs)
        .def_readwrite("IPBanned", &AAccessControl::IPBanned)
        .def_readwrite("WrongPassword", &AAccessControl::WrongPassword)
        .def_readwrite("NeedPassword", &AAccessControl::NeedPassword)
        .def_readwrite("SessionBanned", &AAccessControl::SessionBanned)
        .def_readwrite("KickedMsg", &AAccessControl::KickedMsg)
        .def_readwrite("DefaultKickReason", &AAccessControl::DefaultKickReason)
        .def_readwrite("IdleKickReason", &AAccessControl::IdleKickReason)
        .def_readwrite("AuthenticationFailed", &AAccessControl::AuthenticationFailed)
        .def_readwrite("AdminClass", &AAccessControl::AdminClass)
        .def_readwrite("AdminPassword", &AAccessControl::AdminPassword)
        .def_readwrite("GamePassword", &AAccessControl::GamePassword)
        .def_readwrite("MaxAuthRetryCount", &AAccessControl::MaxAuthRetryCount)
        .def_readwrite("AuthRetryDelay", &AAccessControl::AuthRetryDelay)
        .def_readwrite("OnlineSub", &AAccessControl::OnlineSub)
        .def_readwrite("CachedAuthInt", &AAccessControl::CachedAuthInt)
        .def_readwrite("ClientsPendingAuth", &AAccessControl::ClientsPendingAuth)
        .def_readwrite("ServerAuthRetries", &AAccessControl::ServerAuthRetries)
        .def_readwrite("ListenAuthBlobUID", &AAccessControl::ListenAuthBlobUID)
        .def_readwrite("ListenAuthRetryCount", &AAccessControl::ListenAuthRetryCount)
        .def("StaticClass", &AAccessControl::StaticClass, py::return_value_policy::reference)
        .def("ShutdownAuth", &AAccessControl::ShutdownAuth)
        .def("InitAuth", &AAccessControl::InitAuth)
        .def("IsPendingAuth", &AAccessControl::IsPendingAuth)
        .def("Cleanup", &AAccessControl::Cleanup)
        .def("NotifyExit", &AAccessControl::NotifyExit)
        .def("NotifyGameEnding", &AAccessControl::NotifyGameEnding)
        .def("NotifyTravel", &AAccessControl::NotifyTravel)
        .def("OnDestroyOnlineGameComplete", &AAccessControl::OnDestroyOnlineGameComplete)
        .def("StaticOnClientConnectionClose", &AAccessControl::StaticOnClientConnectionClose)
        .def("OnClientConnectionClose", &AAccessControl::OnClientConnectionClose)
        .def("ListenHostAuthTimeout", &AAccessControl::ListenHostAuthTimeout)
        .def("EndListenHostAuth", &AAccessControl::EndListenHostAuth)
        .def("ContinueListenHostAuth", &AAccessControl::ContinueListenHostAuth)
        .def("BeginListenHostAuth", &AAccessControl::BeginListenHostAuth)
        .def("NotifyStartOnlineGame", &AAccessControl::NotifyStartOnlineGame)
        .def("OnAuthRetryServer", &AAccessControl::OnAuthRetryServer)
        .def("OnAuthRequestServer", &AAccessControl::OnAuthRequestServer)
        .def("OnAuthCompleteClient", &AAccessControl::OnAuthCompleteClient)
        .def("OnAuthBlobReceivedClient", &AAccessControl::OnAuthBlobReceivedClient)
        .def("OnAuthReady", &AAccessControl::OnAuthReady)
        .def("PendingAuthTimer", &AAccessControl::PendingAuthTimer)
        .def("eventPreLogin", &AAccessControl::eventPreLogin)
        .def("IsIDBanned", &AAccessControl::IsIDBanned)
        .def("CheckIPPolicy", &AAccessControl::CheckIPPolicy)
        .def("ValidLogin", &AAccessControl::ValidLogin)
        .def("ParseAdminOptions", &AAccessControl::ParseAdminOptions)
        .def("AdminExited", &AAccessControl::AdminExited)
        .def("AdminEntered", &AAccessControl::AdminEntered)
        .def("AdminLogout", &AAccessControl::AdminLogout)
        .def("AdminLogin", &AAccessControl::AdminLogin)
        .def("KickPlayer", &AAccessControl::KickPlayer)
        .def("ForceKickPlayer", &AAccessControl::ForceKickPlayer)
        .def("KickBan", &AAccessControl::KickBan)
        .def("Kick", &AAccessControl::Kick)
        .def("GetControllerFromString", &AAccessControl::GetControllerFromString, py::return_value_policy::reference)
        .def("RequiresPassword", &AAccessControl::RequiresPassword)
        .def("SetGamePassword", &AAccessControl::SetGamePassword)
        .def("SetAdminPassword", &AAccessControl::SetAdminPassword)
        .def("IsAdmin", &AAccessControl::IsAdmin)
        .def("Destroyed", &AAccessControl::Destroyed)
        .def("PostBeginPlay", &AAccessControl::PostBeginPlay)
          ;
}