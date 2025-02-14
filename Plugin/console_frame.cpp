//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2014 Eran Ifrah
// file name            : console_frame.cpp
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "console_frame.h"

#include "drawingutils.h"
#include "event_notifier.h"
#include "globals.h"
#include "imanager.h"
#include "plugin.h"
#include "windowattrmanager.h"

#include <wx/app.h>

///////////////////////////////////////////////////////////////////////////

ConsoleFrame::ConsoleFrame(wxWindow* parent)
    : wxFrame(parent, wxID_ANY, _("Console"))
{
    CreateGUIControls();
}

ConsoleFrame::~ConsoleFrame()
{
    m_terminal->Unbind(wxEVT_TERMINAL_EXIT_WHEN_DONE, &ConsoleFrame::OnExitWhenDone, this);
    m_terminal->Unbind(wxEVT_TERMINAL_CTRL_C, &ConsoleFrame::OnTerminalCtrlC, this);
}

void ConsoleFrame::CreateGUIControls()
{
    wxBoxSizer* bSizer1;
    bSizer1 = new wxBoxSizer(wxVERTICAL);
    m_terminal = new wxTerminal(this);
    m_terminal->SetInteractive(true);
    bSizer1->Add(m_terminal, 1, wxEXPAND);

    this->SetSizer(bSizer1);
    this->Layout();
    m_terminal->Focus();
    SetSize(wxDLG_UNIT(this, wxSize(500, 300)));
    SetName("ConsoleFrame");
    CenterOnScreen();
    WindowAttrManager::Load(this);
    m_terminal->Bind(wxEVT_TERMINAL_EXIT_WHEN_DONE, &ConsoleFrame::OnExitWhenDone, this);
    m_terminal->Bind(wxEVT_TERMINAL_CTRL_C, &ConsoleFrame::OnTerminalCtrlC, this);
}

void ConsoleFrame::Execute(const wxString& command, const wxString& wd) { m_terminal->Execute(command, true, wd); }

void ConsoleFrame::OnExitWhenDone(clCommandEvent& event)
{
    wxUnusedVar(event);
    Close();
}

void ConsoleFrame::OnTerminalCtrlC(clCommandEvent& event)
{
    event.Skip();
}
