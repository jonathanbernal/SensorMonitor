#ifndef SENSORMONITORMENUBAR_H
#define SENSORMONITORMENUBAR_H

#ifndef WX_PRECOMP
#include <wx/wxprec.h>
#endif

class SensorMonitorMenuBar : public wxMenuBar
{
public:
	SensorMonitorMenuBar();
	
	// A list of IDs for the menu bar only
	enum 
	{
		ID_Settings
	};

private:
	wxMenu* m_menuFile, * m_menuHelp;
	void OnSettings(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);
	void OnExit(wxCommandEvent& event);
};

#endif

