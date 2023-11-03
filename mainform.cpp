/////////////////////////////////////////////////////////////////////////////
// Name:        mainform.cpp
// Purpose:     
// Author:      Sergey Talipov
// Modified by: 
// Created:     03/11/2023 17:35:05
// RCS-ID:      
// Copyright:   15681627-3C745D8E-630127F2
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "mainform.h"

////@begin XPM images
////@end XPM images


/*
 * MainForm type definition
 */

IMPLEMENT_CLASS(MainForm, wxFrame)


/*
 * MainForm event table definition
 */

	BEGIN_EVENT_TABLE(MainForm, wxFrame)

	////@begin MainForm event table entries
    EVT_BUTTON( ID_BUTTON, MainForm::OnButtonClick )
	////@end MainForm event table entries

	END_EVENT_TABLE()


	/*
	 * MainForm constructors
	 */

	MainForm::MainForm()
{
	Init();
}

MainForm::MainForm(wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style)
{
	Init();
	Create(parent, id, caption, pos, size, style);
}


/*
 * MainForm creator
 */

bool MainForm::Create(wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style)
{
	////@begin MainForm creation
    wxFrame::Create( parent, id, caption, pos, size, style );

    CreateControls();
    SetIcon(GetIconResource(wxT("MAIN_ICON")));
    Centre();
	////@end MainForm creation
	return true;
}


/*
 * MainForm destructor
 */

MainForm::~MainForm()
{
	////@begin MainForm destruction
	////@end MainForm destruction
}


/*
 * Member initialisation
 */

void MainForm::Init()
{
	////@begin MainForm member initialisation
	////@end MainForm member initialisation
}


/*
 * Control creation for MainForm
 */


void MainForm::CreateControls()
{
	////@begin MainForm content construction
    MainForm* itemFrame1 = this;

    wxGridBagSizer* itemGridBagSizer1 = new wxGridBagSizer(0, 0);
    itemGridBagSizer1->SetEmptyCellSize(wxSize(10, 20));
    itemFrame1->SetSizer(itemGridBagSizer1);

    wxStaticText* itemStaticText1 = new wxStaticText( itemFrame1, wxID_STATIC, wxGetTranslation(wxString() + (wxChar) 0x0412 + (wxChar) 0x0432 + (wxChar) 0x0435 + (wxChar) 0x0434 + (wxChar) 0x0438 + (wxChar) 0x0442 + (wxChar) 0x0435 + wxT(" ") + (wxChar) 0x0430 + wxT(":")), wxDefaultPosition, wxDefaultSize, 0 );
    itemGridBagSizer1->Add(itemStaticText1, wxGBPosition(1, 2), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxTextCtrl* itemTextCtrl1 = new wxTextCtrl( itemFrame1, ID_TEXTCTRL_a, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemGridBagSizer1->Add(itemTextCtrl1, wxGBPosition(1, 6), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText2 = new wxStaticText( itemFrame1, wxID_STATIC, wxGetTranslation(wxString() + (wxChar) 0x0412 + (wxChar) 0x0432 + (wxChar) 0x0435 + (wxChar) 0x0434 + (wxChar) 0x0438 + (wxChar) 0x0442 + (wxChar) 0x0435 + wxT(" b:")), wxDefaultPosition, wxDefaultSize, 0 );
    itemGridBagSizer1->Add(itemStaticText2, wxGBPosition(3, 2), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton3 = new wxButton( itemFrame1, ID_BUTTON, wxGetTranslation(wxString() + (wxChar) 0x041F + (wxChar) 0x043E + (wxChar) 0x0434 + (wxChar) 0x0435 + (wxChar) 0x043B + (wxChar) 0x0438 + (wxChar) 0x0442 + (wxChar) 0x044C), wxDefaultPosition, wxDefaultSize, 0 );
    itemGridBagSizer1->Add(itemButton3, wxGBPosition(5, 6), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText4 = new wxStaticText( itemFrame1, wxID_STATIC_Result, wxGetTranslation(wxString() + (wxChar) 0x0420 + (wxChar) 0x0435 + (wxChar) 0x0437 + (wxChar) 0x0443 + (wxChar) 0x043B + (wxChar) 0x044C + (wxChar) 0x0442 + (wxChar) 0x0430 + (wxChar) 0x0442), wxDefaultPosition, wxDefaultSize, 0 );
    itemGridBagSizer1->Add(itemStaticText4, wxGBPosition(7, 2), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxTextCtrl* itemTextCtrl2 = new wxTextCtrl( itemFrame1, ID_TEXTCTRL_b, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemGridBagSizer1->Add(itemTextCtrl2, wxGBPosition(3, 6), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxTextCtrl* itemTextCtrl3 = new wxTextCtrl( itemFrame1, ID_TEXTCTRL_c, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
    itemGridBagSizer1->Add(itemTextCtrl3, wxGBPosition(7, 6), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

	////@end MainForm content construction
}


/*
 * Should we show tooltips?
 */

bool MainForm::ShowToolTips()
{
	return true;
}

/*
 * Get bitmap resources
 */

wxBitmap MainForm::GetBitmapResource(const wxString& name)
{
	// Bitmap retrieval
////@begin MainForm bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
	////@end MainForm bitmap retrieval
}

/*
 * Get icon resources
 */

wxIcon MainForm::GetIconResource(const wxString& name)
{
	// Icon retrieval
////@begin MainForm icon retrieval
    wxUnusedVar(name);
    if (name == wxT("MAIN_ICON"))
    {
        wxIcon icon(wxT("MAIN_ICON"), wxBITMAP_TYPE_ICO_RESOURCE);
        return icon;
    }
    return wxNullIcon;
	////@end MainForm icon retrieval
}


/*
 * wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON
 */

// ����������
void MainForm::OnButtonClick(wxCommandEvent& event)
{
	double a, b; // ������� ������
	wxTextCtrl* itemTextCtrl1 = (wxTextCtrl*)FindWindow(ID_TEXTCTRL_a); // ������� ��������� a �� ID
	wxTextCtrl* itemTextCtrl2 = (wxTextCtrl*)FindWindow(ID_TEXTCTRL_b); // ������� ��������� b �� ID
	wxTextCtrl* itemTextCtrl3 = (wxTextCtrl*)FindWindow(ID_TEXTCTRL_c); // ������� ��������� c �� ID
	if (!itemTextCtrl1->GetValue().ToDouble(&a)) { // �������� �������� �� ���������� a
		wxMessageBox(wxT("a is not a number")); // ������� ��������� �� ������
		return; // ������� �� �������
	}
	if (!itemTextCtrl2->GetValue().ToDouble(&b)) { // �������� �������� �� ���������� b
		wxMessageBox(wxT("b is not a number")); // ������� ��������� �� ������
		return; // ������� �� �������
	}
	double c = a / b; // ��������� ���������
	if (isnan(c) || isinf(c)) { // ��������� ��������� �� ������
		wxMessageBox(wxT("c is not a number")); // ������� ��������� �� ������
		return; // ������� �� �������
	}
	itemTextCtrl3->SetValue(wxString::Format(wxT("%0.3f"), c)); // ������� ��������� � ��������� c
}

