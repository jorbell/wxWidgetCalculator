#ifndef BUTTONPAD_H
#define BUTTONPAD_H
#include <wx/wx.h>

class ButtonPad : public wxPanel
{
public:
  ButtonPad(wxPanel *parent);


  wxPanel *m_parent;
  wxGridSizer *grid;

};
#endif
