//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: phprefactoringdlg.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "phprefactoringdlgbase.h"


// Declare the bitmap loading function
extern void wxCrafterGgLOZbInitBitmapResources();

static bool bBitmapLoaded = false;


PHPRefactoringBaseDlg::PHPRefactoringBaseDlg(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterGgLOZbInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* bSizerMain = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizerMain);
    
    wxFlexGridSizer* flexGridSizer2 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer2->SetFlexibleDirection( wxBOTH );
    flexGridSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer2->AddGrowableCol(1);
    
    bSizerMain->Add(flexGridSizer2, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticText2 = new wxStaticText(this, wxID_ANY, _("PHP Refactoring"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), 0);
    
    flexGridSizer2->Add(m_staticText2, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));
    
    m_filePickerPhprefactoringPhar = new wxFilePickerCtrl(this, wxID_ANY, wxEmptyString, _("Select a file"), wxT("*"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), wxFLP_USE_TEXTCTRL|wxFLP_SMALL);
    m_filePickerPhprefactoringPhar->SetToolTip(_("Select the PHP Refactoring Browser phar file location"));
    
    flexGridSizer2->Add(m_filePickerPhprefactoringPhar, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_stdBtnSizer = new wxStdDialogButtonSizer();
    
    bSizerMain->Add(m_stdBtnSizer, 0, wxALL, WXC_FROM_DIP(5));
    
    m_buttonOK = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_buttonOK->SetDefault();
    m_stdBtnSizer->AddButton(m_buttonOK);
    
    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_stdBtnSizer->AddButton(m_buttonCancel);
    m_stdBtnSizer->Realize();
    
    SetName(wxT("PHPRefactoringBaseDlg"));
    SetSize(-1,-1);
    if (GetSizer()) {
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
}

PHPRefactoringBaseDlg::~PHPRefactoringBaseDlg()
{
}
