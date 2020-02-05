#include "ButtonPad.h"

ButtonPad::ButtonPad(wxPanel *parent)
       : wxPanel(parent, -1, wxPoint(-1, -1), wxSize(-1, -1), wxBORDER_SUNKEN)
{
  wxBoxSizer *sizer = new wxBoxSizer(wxHORIZONTAL);
  grid = new wxGridSizer(4, 4, 3, 3);

  m_parent = parent;
  sizer->Add(grid, 1, wxEXPAND);
  SetSizer(sizer);
  SetMinSize(wxSize(270, 220));

  Centre();
}
