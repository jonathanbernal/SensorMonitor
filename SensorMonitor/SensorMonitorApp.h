#ifndef SENSORMONITORAPP_H
#define SENSORMONITORAPP_H

#include <wx/wxprec.h> // For compilers that support precompilation, includes "wx/wx.h".
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

class SensorMonitorApp : public wxApp
{
public:
    virtual bool OnInit();
};

#endif
