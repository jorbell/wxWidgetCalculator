#ifndef COMMUNICATE_H
#define COMMUNICATE_H
#include <wx/wxprec.h>
#include "Display.h"
#include "Button.h"
#include "ButtonPad.h"


class Communicate : public wxFrame
{
public:
    Communicate(const wxString& title);

    ButtonPad *m_buttonpad;
    Display *m_display;
    wxPanel *m_parent;

};
#endif
