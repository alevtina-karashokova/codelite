//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: depend_dlg_page.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "buildorderbasepage.h"

// Declare the bitmap loading function
extern void wxC312EInitBitmapResources();

static bool bBitmapLoaded = false;

BuildOrderDialogBase::BuildOrderDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos,
                                           const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC312EInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer32 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer32);

    wxBoxSizer* boxSizer1 = new wxBoxSizer(wxVERTICAL);

    boxSizer32->Add(boxSizer1, 1, wxALL | wxEXPAND, WXC_FROM_DIP(0));

    m_staticText3 = new wxStaticText(this, wxID_ANY, _("Select build order for configuration:"), wxDefaultPosition,
                                     wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer1->Add(m_staticText3, 0, wxLEFT | wxRIGHT | wxTOP, WXC_FROM_DIP(10));

    wxArrayString m_choiceProjectConfigArr;
    m_choiceProjectConfig =
        new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), m_choiceProjectConfigArr, 0);

    boxSizer1->Add(m_choiceProjectConfig, 0, wxALL | wxEXPAND, WXC_FROM_DIP(10));

    wxFlexGridSizer* flexGridSizer10 = new wxFlexGridSizer(0, 3, 0, 0);
    flexGridSizer10->SetFlexibleDirection(wxBOTH);
    flexGridSizer10->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);
    flexGridSizer10->AddGrowableCol(0);
    flexGridSizer10->AddGrowableCol(2);
    flexGridSizer10->AddGrowableRow(0);

    boxSizer1->Add(flexGridSizer10, 1, wxALL | wxEXPAND, WXC_FROM_DIP(10));

    m_dvListCtrlProjects = new clThemedOrderedListCtrl(this, wxID_ANY, wxDefaultPosition,
                                                       wxDLG_UNIT(this, wxSize(150, -1)), wxDV_ROW_LINES | wxDV_SINGLE);

    flexGridSizer10->Add(m_dvListCtrlProjects, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_dvListCtrlProjects->AppendTextColumn(_("Projects"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(-2), wxALIGN_LEFT,
                                           wxDATAVIEW_COL_RESIZABLE);
    wxBoxSizer* boxSizer3 = new wxBoxSizer(wxVERTICAL);

    flexGridSizer10->Add(boxSizer3, 1, wxALL | wxEXPAND | wxALIGN_TOP, WXC_FROM_DIP(5));

    m_button22 = new wxButton(this, wxID_ANY, _("-->"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer3->Add(m_button22, 0, wxALL, WXC_FROM_DIP(5));

    m_button24 = new wxButton(this, wxID_ANY, _("<--"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer3->Add(m_button24, 0, wxALL, WXC_FROM_DIP(5));

    wxBoxSizer* bSizer4 = new wxBoxSizer(wxVERTICAL);

    flexGridSizer10->Add(bSizer4, 6, wxEXPAND, WXC_FROM_DIP(5));

    wxBoxSizer* bSizer11 = new wxBoxSizer(wxHORIZONTAL);

    bSizer4->Add(bSizer11, 1, wxEXPAND, WXC_FROM_DIP(5));

    wxBoxSizer* bSizer5 = new wxBoxSizer(wxVERTICAL);

    bSizer11->Add(bSizer5, 1, wxEXPAND, WXC_FROM_DIP(5));

    m_dvListCtrlBuildOrder = new clThemedListCtrl(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(150, -1)),
                                                  wxDV_ROW_LINES | wxDV_SINGLE);

    bSizer5->Add(m_dvListCtrlBuildOrder, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_dvListCtrlBuildOrder->AppendTextColumn(_("Build Order"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(-2), wxALIGN_LEFT,
                                             wxDATAVIEW_COL_RESIZABLE);
    wxBoxSizer* bSizer6 = new wxBoxSizer(wxVERTICAL);

    bSizer11->Add(bSizer6, 0, wxEXPAND, WXC_FROM_DIP(5));

    wxBoxSizer* bSizer8 = new wxBoxSizer(wxVERTICAL);

    bSizer6->Add(bSizer8, 1, wxEXPAND, WXC_FROM_DIP(5));

    m_buttonUp = new wxButton(this, wxID_UP, _("Up"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    bSizer8->Add(m_buttonUp, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_buttonDown = new wxButton(this, wxID_DOWN, _("Down"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    bSizer8->Add(m_buttonDown, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    wxBoxSizer* bSizer7 = new wxBoxSizer(wxVERTICAL);

    bSizer6->Add(bSizer7, 0, 0, WXC_FROM_DIP(5));

    m_buttonApply = new wxButton(this, wxID_APPLY, _("Apply"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_buttonApply->SetDefault();
    m_buttonApply->SetFocus();

    bSizer7->Add(m_buttonApply, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_stdBtnSizer52 = new wxStdDialogButtonSizer();

    boxSizer32->Add(m_stdBtnSizer52, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(10));

    m_button54 = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_button54->SetDefault();
    m_stdBtnSizer52->AddButton(m_button54);

    m_button56 = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_stdBtnSizer52->AddButton(m_button56);
    m_stdBtnSizer52->Realize();

    SetName(wxT("BuildOrderDialogBase"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
    if(GetSizer()) {
        GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_choiceProjectConfig->Connect(wxEVT_COMMAND_CHOICE_SELECTED,
                                   wxCommandEventHandler(BuildOrderDialogBase::OnConfigChanged), NULL, this);
    m_button22->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BuildOrderDialogBase::OnMoveRight), NULL,
                        this);
    m_button22->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(BuildOrderDialogBase::OnMoveRightUI), NULL, this);
    m_button24->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(BuildOrderDialogBase::OnMoveLeftUI), NULL, this);
    m_button24->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BuildOrderDialogBase::OnMoveLeft), NULL,
                        this);
    m_buttonUp->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BuildOrderDialogBase::OnMoveUp), NULL,
                        this);
    m_buttonDown->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BuildOrderDialogBase::OnMoveDown), NULL,
                          this);
    m_buttonApply->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BuildOrderDialogBase::OnApplyButton),
                           NULL, this);
    m_buttonApply->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(BuildOrderDialogBase::OnApplyButtonUI), NULL, this);
    m_button54->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BuildOrderDialogBase::OnButtonOK), NULL,
                        this);
}

BuildOrderDialogBase::~BuildOrderDialogBase()
{
    m_choiceProjectConfig->Disconnect(wxEVT_COMMAND_CHOICE_SELECTED,
                                      wxCommandEventHandler(BuildOrderDialogBase::OnConfigChanged), NULL, this);
    m_button22->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BuildOrderDialogBase::OnMoveRight), NULL,
                           this);
    m_button22->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(BuildOrderDialogBase::OnMoveRightUI), NULL, this);
    m_button24->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(BuildOrderDialogBase::OnMoveLeftUI), NULL, this);
    m_button24->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BuildOrderDialogBase::OnMoveLeft), NULL,
                           this);
    m_buttonUp->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BuildOrderDialogBase::OnMoveUp), NULL,
                           this);
    m_buttonDown->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BuildOrderDialogBase::OnMoveDown),
                             NULL, this);
    m_buttonApply->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BuildOrderDialogBase::OnApplyButton),
                              NULL, this);
    m_buttonApply->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(BuildOrderDialogBase::OnApplyButtonUI), NULL,
                              this);
    m_button54->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BuildOrderDialogBase::OnButtonOK), NULL,
                           this);
}
