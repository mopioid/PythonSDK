#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineAuthInterfaceImpl(py::module &m)
{
    py::class_< UOnlineAuthInterfaceImpl,  UOnlineAuthInterfaceBaseImpl   >(m, "UOnlineAuthInterfaceImpl")
        .def_readwrite("OwningSubsystem", &UOnlineAuthInterfaceImpl::OwningSubsystem)
        .def_readwrite("AuthReadyDelegates", &UOnlineAuthInterfaceImpl::AuthReadyDelegates)
        .def_readwrite("AuthRequestClientDelegates", &UOnlineAuthInterfaceImpl::AuthRequestClientDelegates)
        .def_readwrite("AuthRequestServerDelegates", &UOnlineAuthInterfaceImpl::AuthRequestServerDelegates)
        .def_readwrite("AuthBlobReceivedClientDelegates", &UOnlineAuthInterfaceImpl::AuthBlobReceivedClientDelegates)
        .def_readwrite("AuthBlobReceivedServerDelegates", &UOnlineAuthInterfaceImpl::AuthBlobReceivedServerDelegates)
        .def_readwrite("AuthCompleteClientDelegates", &UOnlineAuthInterfaceImpl::AuthCompleteClientDelegates)
        .def_readwrite("AuthCompleteServerDelegates", &UOnlineAuthInterfaceImpl::AuthCompleteServerDelegates)
        .def_readwrite("AuthKillClientDelegates", &UOnlineAuthInterfaceImpl::AuthKillClientDelegates)
        .def_readwrite("AuthRetryServerDelegates", &UOnlineAuthInterfaceImpl::AuthRetryServerDelegates)
        .def_readwrite("ClientConnectionCloseDelegates", &UOnlineAuthInterfaceImpl::ClientConnectionCloseDelegates)
        .def_readwrite("ServerConnectionCloseDelegates", &UOnlineAuthInterfaceImpl::ServerConnectionCloseDelegates)
        .def("StaticClass", &UOnlineAuthInterfaceImpl::StaticClass, py::return_value_policy::reference)
        .def("FindLocalServerAuthSession", &UOnlineAuthInterfaceImpl::FindLocalServerAuthSession)
        .def("FindServerAuthSession", &UOnlineAuthInterfaceImpl::FindServerAuthSession)
        .def("FindLocalClientAuthSession", &UOnlineAuthInterfaceImpl::FindLocalClientAuthSession)
        .def("FindClientAuthSession", &UOnlineAuthInterfaceImpl::FindClientAuthSession)
        .def("SendAuthRetryServer", &UOnlineAuthInterfaceImpl::SendAuthRetryServer)
        .def("SendAuthKillClient", &UOnlineAuthInterfaceImpl::SendAuthKillClient)
        .def("SendAuthBlobServer", &UOnlineAuthInterfaceImpl::SendAuthBlobServer)
        .def("SendAuthBlobClient", &UOnlineAuthInterfaceImpl::SendAuthBlobClient)
        .def("ClearServerConnectionCloseDelegate", &UOnlineAuthInterfaceImpl::ClearServerConnectionCloseDelegate)
        .def("AddServerConnectionCloseDelegate", &UOnlineAuthInterfaceImpl::AddServerConnectionCloseDelegate)
        .def("ClearClientConnectionCloseDelegate", &UOnlineAuthInterfaceImpl::ClearClientConnectionCloseDelegate)
        .def("AddClientConnectionCloseDelegate", &UOnlineAuthInterfaceImpl::AddClientConnectionCloseDelegate)
        .def("ClearAuthRetryServerDelegate", &UOnlineAuthInterfaceImpl::ClearAuthRetryServerDelegate)
        .def("AddAuthRetryServerDelegate", &UOnlineAuthInterfaceImpl::AddAuthRetryServerDelegate)
        .def("ClearAuthKillClientDelegate", &UOnlineAuthInterfaceImpl::ClearAuthKillClientDelegate)
        .def("AddAuthKillClientDelegate", &UOnlineAuthInterfaceImpl::AddAuthKillClientDelegate)
        .def("ClearAuthCompleteServerDelegate", &UOnlineAuthInterfaceImpl::ClearAuthCompleteServerDelegate)
        .def("AddAuthCompleteServerDelegate", &UOnlineAuthInterfaceImpl::AddAuthCompleteServerDelegate)
        .def("ClearAuthCompleteClientDelegate", &UOnlineAuthInterfaceImpl::ClearAuthCompleteClientDelegate)
        .def("AddAuthCompleteClientDelegate", &UOnlineAuthInterfaceImpl::AddAuthCompleteClientDelegate)
        .def("ClearAuthBlobReceivedServerDelegate", &UOnlineAuthInterfaceImpl::ClearAuthBlobReceivedServerDelegate)
        .def("AddAuthBlobReceivedServerDelegate", &UOnlineAuthInterfaceImpl::AddAuthBlobReceivedServerDelegate)
        .def("ClearAuthBlobReceivedClientDelegate", &UOnlineAuthInterfaceImpl::ClearAuthBlobReceivedClientDelegate)
        .def("AddAuthBlobReceivedClientDelegate", &UOnlineAuthInterfaceImpl::AddAuthBlobReceivedClientDelegate)
        .def("ClearAuthRequestServerDelegate", &UOnlineAuthInterfaceImpl::ClearAuthRequestServerDelegate)
        .def("AddAuthRequestServerDelegate", &UOnlineAuthInterfaceImpl::AddAuthRequestServerDelegate)
        .def("ClearAuthRequestClientDelegate", &UOnlineAuthInterfaceImpl::ClearAuthRequestClientDelegate)
        .def("AddAuthRequestClientDelegate", &UOnlineAuthInterfaceImpl::AddAuthRequestClientDelegate)
        .def("ClearAuthReadyDelegate", &UOnlineAuthInterfaceImpl::ClearAuthReadyDelegate)
        .def("AddAuthReadyDelegate", &UOnlineAuthInterfaceImpl::AddAuthReadyDelegate)
          ;
}