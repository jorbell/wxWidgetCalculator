#ifndef COMMUNICATE_H
#define COMMUNICATE_H
#include <wx/wxprec.h>
#include "Panels.h"
#include "Button.h"


class Communicate : public wxFrame
{
public:
    Communicate(const wxString& title);

    TopPanel *m_tp;
    BottomPanel *m_bp;
    wxPanel *m_parent;

};
#endif
