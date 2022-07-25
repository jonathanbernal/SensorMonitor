#ifndef SENSORMONITORMAINFRAME_H
	#include "SensorMonitorMainFrame.h"
#endif

SensorMonitorMainFrame::SensorMonitorMainFrame()
    : wxFrame(NULL, wxID_ANY, "Hello World")
{
    Center(); // renders the window on the center of the screen
    
    m_menuBar = new SensorMonitorMenuBar;
    SetMenuBar(m_menuBar);

    // Set up the sizer and buttons for the frame
    wxBoxSizer* menuSizer = new wxBoxSizer(wxVERTICAL);
    menuSizer->Add(new wxButton(this, -1, "Connect to BeagleBone Server"), 1, 0, 0);
    menuSizer->Add(new wxButton(this, -1, "Get listing"), 1, wxALIGN_CENTER, 0);
 
    //menuSizer->SetSizeHints(this);
    SetSizer(menuSizer);

    // Set up the status bar
    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");
}
