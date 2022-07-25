#ifndef SENSORMONITORMAINFRAME_H
#define SENSORMONITORMAINFRAME_H

#ifndef WX_PRECOMP
#include <wx/wxprec.h>
#endif

#include "SensorMonitorMenuBar.h"

class SensorMonitorMainFrame : public wxFrame
{
public:
    SensorMonitorMainFrame();
    
private:
    // Components
    SensorMonitorMenuBar* m_menuBar;

    // Events
};

#endif