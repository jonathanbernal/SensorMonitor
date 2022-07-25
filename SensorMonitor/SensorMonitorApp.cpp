#include "SensorMonitorApp.h"
#include "SensorMonitorMainFrame.h"

wxIMPLEMENT_APP(SensorMonitorApp);

bool SensorMonitorApp::OnInit()
{
    SensorMonitorMainFrame* mainFrame = new SensorMonitorMainFrame();
    mainFrame->Show(true);
    return true;
}