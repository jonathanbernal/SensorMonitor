#include "SensorMonitorMenuBar.h"

SensorMonitorMenuBar::SensorMonitorMenuBar()
{
	m_menuFile = new wxMenu;
	m_menuFile->Append(ID_Settings, _("Settings"), _("Configure the server settings and more"));
	m_menuFile->AppendSeparator();
	m_menuFile->Append(wxID_EXIT);

	m_menuHelp = new wxMenu;
	m_menuHelp->Append(wxID_ABOUT);

	this->Append(m_menuFile, _("&File"));
	this->Append(m_menuHelp, _("&Help"));

	// Bind the specific event handlers to the menu bar
	Bind(wxEVT_MENU, &SensorMonitorMenuBar::OnSettings, this, ID_Settings);
	Bind(wxEVT_MENU, &SensorMonitorMenuBar::OnAbout, this, wxID_ABOUT);
	Bind(wxEVT_MENU, &SensorMonitorMenuBar::OnExit, this, wxID_EXIT);
}

void SensorMonitorMenuBar::OnSettings(wxCommandEvent& event)
{
	wxMessageBox(_("You opened up the Settings Option"), _("Settings"),
		wxOK | wxICON_INFORMATION);
}

void SensorMonitorMenuBar::OnAbout(wxCommandEvent& event)
{
	wxMessageBox(_("Designed by Jonathan Bernal\nAugust, 2022"), _("About Sensor Monitor App"),
		wxOK | wxICON_INFORMATION);
}

void SensorMonitorMenuBar::OnExit(wxCommandEvent& event)
{
	// Get the frame on which the menu bar is created and close it using the safe method.
	// Saves us from having to free memory
	this->GetParent()->Close(true);
}