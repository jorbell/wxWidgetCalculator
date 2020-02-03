#include "Communicate.h"

Communicate::Communicate(const wxString& title)
       : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(400, 600))
{
  m_parent = new wxPanel(this, wxID_ANY);

  wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);

  m_bp = new BottomPanel(m_parent);
  m_tp = new TopPanel(m_parent);

    wxVector<Button*> btns;
    int row;
    for (int i = 9; i >= 0; i--) {
       if (i%3 == 0 && i != 9) {
           row ++;
       }
       btns.push_back(new Button(wxString("number"),i, (i%3*30)+(i%3*10)+10, row*30+10, wxString::Format(wxT("%d"),i), m_bp,m_tp));
    }
       btns.push_back(new Button(wxString("number"),10, 50, 100, wxString("."), m_bp,m_tp));
       btns.push_back(new Button(wxString("operator"),10, 130, 10, wxString("+"), m_bp,m_tp));
       btns.push_back(new Button(wxString("operator"),10, 130, 40, wxString("-"), m_bp,m_tp));
       btns.push_back(new Button(wxString("operator"),10, 130, 70, wxString("*"), m_bp,m_tp));
       btns.push_back(new Button(wxString("operator"),10, 130, 100, wxString("/"), m_bp,m_tp));
       btns.push_back(new Button(wxString("operator"),10, 130, 130, wxString("="), m_bp,m_tp));

  vbox->Add(m_tp, 1, wxEXPAND | wxALL, 5);
  vbox->Add(m_bp, 1, wxEXPAND | wxALL, 5);

  m_parent->SetSizer(vbox);

  this->Centre();
}
