#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxColiseumOverlayMovie(py::module &m)
{
    py::class_< UWillowGFxColiseumOverlayMovie,  UWillowGFxMovie   >(m, "UWillowGFxColiseumOverlayMovie")
        .def_readwrite("OverlayDef", &UWillowGFxColiseumOverlayMovie::OverlayDef)
        .def_readwrite("RoundPrefix", &UWillowGFxColiseumOverlayMovie::RoundPrefix)
        .def_readwrite("WavePrefix", &UWillowGFxColiseumOverlayMovie::WavePrefix)
        .def_readwrite("CertificateText", &UWillowGFxColiseumOverlayMovie::CertificateText)
        .def_readwrite("CachedRound", &UWillowGFxColiseumOverlayMovie::CachedRound)
        .def_readwrite("CachedWave", &UWillowGFxColiseumOverlayMovie::CachedWave)
        .def_readwrite("CachedMaxRound", &UWillowGFxColiseumOverlayMovie::CachedMaxRound)
        .def_readwrite("RoundResult", &UWillowGFxColiseumOverlayMovie::RoundResult)
        .def_readwrite("RoundSummary", &UWillowGFxColiseumOverlayMovie::RoundSummary)
        .def_readwrite("EnemyDamage", &UWillowGFxColiseumOverlayMovie::EnemyDamage)
        .def_readwrite("EnemyHealth", &UWillowGFxColiseumOverlayMovie::EnemyHealth)
        .def_readwrite("EnemyShields", &UWillowGFxColiseumOverlayMovie::EnemyShields)
        .def_readwrite("LatentScreenType", &UWillowGFxColiseumOverlayMovie::LatentScreenType)
        .def_readwrite("Platform", &UWillowGFxColiseumOverlayMovie::Platform)
        .def_readwrite("PlayerLines", &UWillowGFxColiseumOverlayMovie::PlayerLines)
        .def_readwrite("HighlightedResultsLine", &UWillowGFxColiseumOverlayMovie::HighlightedResultsLine)
        .def("StaticClass", &UWillowGFxColiseumOverlayMovie::StaticClass, py::return_value_policy::reference)
        .def("CertificateGotoAndStop", &UWillowGFxColiseumOverlayMovie::CertificateGotoAndStop)
        .def("HighlightGotoFrame", &UWillowGFxColiseumOverlayMovie::HighlightGotoFrame)
        .def("CatchupColiseumRule_Wrapper", &UWillowGFxColiseumOverlayMovie::CatchupColiseumRule_Wrapper)
        .def("CatchupColiseum_Wrapper", &UWillowGFxColiseumOverlayMovie::CatchupColiseum_Wrapper)
        .def("CloseConfirm_Wrapper", &UWillowGFxColiseumOverlayMovie::CloseConfirm_Wrapper)
        .def("ShowColiseumToLobbyConfirm_Wrapper", &UWillowGFxColiseumOverlayMovie::ShowColiseumToLobbyConfirm_Wrapper)
        .def("ShowPenaltyBox_Wrapper", &UWillowGFxColiseumOverlayMovie::ShowPenaltyBox_Wrapper)
        .def("CloseCertificate_Wrapper", &UWillowGFxColiseumOverlayMovie::CloseCertificate_Wrapper)
        .def("AwardCertificate_Wrapper", &UWillowGFxColiseumOverlayMovie::AwardCertificate_Wrapper)
        .def("CloseResults_Wrapper", &UWillowGFxColiseumOverlayMovie::CloseResults_Wrapper)
        .def("ConfigureResultsScreen_Wrapper", &UWillowGFxColiseumOverlayMovie::ConfigureResultsScreen_Wrapper)
        .def("ShowResults_Wrapper", &UWillowGFxColiseumOverlayMovie::ShowResults_Wrapper)
        .def("Notify_Wrapper", &UWillowGFxColiseumOverlayMovie::Notify_Wrapper)
        .def("RuleAnnounce_Wrapper", &UWillowGFxColiseumOverlayMovie::RuleAnnounce_Wrapper)
        .def("RoundAnnounce_Wrapper", &UWillowGFxColiseumOverlayMovie::RoundAnnounce_Wrapper)
        .def("StartColiseumTimer_Wrapper", &UWillowGFxColiseumOverlayMovie::StartColiseumTimer_Wrapper)
        .def("UpdateWaveDisplay", &UWillowGFxColiseumOverlayMovie::UpdateWaveDisplay)
        .def("UpdateRoundDisplay", &UWillowGFxColiseumOverlayMovie::UpdateRoundDisplay)
        .def("TurnOffColiseumRule_Wrapper", &UWillowGFxColiseumOverlayMovie::TurnOffColiseumRule_Wrapper)
        .def("UpdateColiseumRule_Wrapper", &UWillowGFxColiseumOverlayMovie::UpdateColiseumRule_Wrapper)
        .def("RulesGotoLabel", &UWillowGFxColiseumOverlayMovie::RulesGotoLabel)
        .def("ShowGamerTagCard", &UWillowGFxColiseumOverlayMovie::ShowGamerTagCard)
        .def("SetInput", &UWillowGFxColiseumOverlayMovie::SetInput)
        .def("MoveResultsHighlight", &UWillowGFxColiseumOverlayMovie::MoveResultsHighlight)
        .def("UpdateVisibilityForStatusMenu", &UWillowGFxColiseumOverlayMovie::UpdateVisibilityForStatusMenu)
        .def("CatchupColiseumOverlay", &UWillowGFxColiseumOverlayMovie::CatchupColiseumOverlay)
        .def("CatchupNewPlayer", &UWillowGFxColiseumOverlayMovie::CatchupNewPlayer)
        .def("CloseConfirm", &UWillowGFxColiseumOverlayMovie::CloseConfirm)
        .def("ShowColiseumToLobbyConfirm", &UWillowGFxColiseumOverlayMovie::ShowColiseumToLobbyConfirm)
        .def("ShowPenaltyBox", &UWillowGFxColiseumOverlayMovie::ShowPenaltyBox)
        .def("OnCertificateScreenDismissable", &UWillowGFxColiseumOverlayMovie::OnCertificateScreenDismissable)
        .def("OnResultsScreenDismissable", &UWillowGFxColiseumOverlayMovie::OnResultsScreenDismissable)
        .def("CloseCertificateScreen", &UWillowGFxColiseumOverlayMovie::CloseCertificateScreen)
        .def("AwardCertificate", &UWillowGFxColiseumOverlayMovie::AwardCertificate)
        .def("CloseResultsScreen", &UWillowGFxColiseumOverlayMovie::CloseResultsScreen)
        .def("ShowResultsScreen", &UWillowGFxColiseumOverlayMovie::ShowResultsScreen)
        .def("PublishColiseumStatDelta", &UWillowGFxColiseumOverlayMovie::PublishColiseumStatDelta)
        .def("Notify", &UWillowGFxColiseumOverlayMovie::Notify)
        .def("RuleAnnounce", &UWillowGFxColiseumOverlayMovie::RuleAnnounce)
        .def("RoundAnnounce", &UWillowGFxColiseumOverlayMovie::RoundAnnounce)
        .def("GetFilledInRoundSummary", &UWillowGFxColiseumOverlayMovie::GetFilledInRoundSummary)
        .def("BeginRoundAnnounce", &UWillowGFxColiseumOverlayMovie::BeginRoundAnnounce)
        .def("StartColiseumTimer", &UWillowGFxColiseumOverlayMovie::StartColiseumTimer)
        .def("UpdateColiseumRule", &UWillowGFxColiseumOverlayMovie::UpdateColiseumRule)
        .def("extConfirmIsOpen", &UWillowGFxColiseumOverlayMovie::extConfirmIsOpen)
        .def("extSetupCertificate", &UWillowGFxColiseumOverlayMovie::extSetupCertificate)
        .def("extSetupResultsScreen", &UWillowGFxColiseumOverlayMovie::extSetupResultsScreen)
        .def("extRuleAnnounceComplete", &UWillowGFxColiseumOverlayMovie::extRuleAnnounceComplete)
        .def("OnConsumeEverything", &UWillowGFxColiseumOverlayMovie::OnConsumeEverything)
        .def("OnConfirmInputKey", &UWillowGFxColiseumOverlayMovie::OnConfirmInputKey)
        .def("OnCertificateInputKey", &UWillowGFxColiseumOverlayMovie::OnCertificateInputKey)
        .def("OnResultsScreenInputKey", &UWillowGFxColiseumOverlayMovie::OnResultsScreenInputKey)
        .def("eventOnClose", &UWillowGFxColiseumOverlayMovie::eventOnClose)
        .def("eventStart", &UWillowGFxColiseumOverlayMovie::eventStart)
          ;
}