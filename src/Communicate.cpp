#include "Communicate.h"

Communicate::Communicate(const wxString& title)
       : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(400, 600))
{
    m_parent = new wxPanel(this, wxID_ANY);
    wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);
    m_display = new Display(m_parent);
    m_buttonpad = new ButtonPad(m_parent);

    int id;
    int numb = 1;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (j == 3) {
                switch (i) {
                    case 0:
                        m_buttonpad->grid->Add(new Button(wxString("operator"),id, wxString("+"), m_buttonpad),0,wxEXPAND);
                        break;
                    case 1:
                        m_buttonpad->grid->Add(new Button(wxString("operator"),id, wxString("*"), m_buttonpad),0,wxEXPAND);
                        break;
                    case 2:
                        m_buttonpad->grid->Add(new Button(wxString("operator"),id, wxString("-"), m_buttonpad),0,wxEXPAND);
                        break;
                    case 3:
                        m_buttonpad->grid->Add(new Button(wxString("operator"),id, wxString("/"), m_buttonpad),0,wxEXPAND);
                        break;
                    default:
                        break;
                }
           }else{
               if (numb < 10){
                m_buttonpad->grid->Add(new Button(wxString("number"),id, wxString::Format(wxT("%d"),numb),m_buttonpad),0,wxEXPAND);
               }else if (numb == 10){
                    m_buttonpad->grid->Add(new Button(wxString("number"),id, wxString::Format(wxT("%d"),0),m_buttonpad),0,wxEXPAND);
               }else if (numb == 11){
                    m_buttonpad->grid->Add(new Button(wxString("number"),id, wxString("."),m_buttonpad),0,wxEXPAND);
               }else if (numb == 12){
                    m_buttonpad->grid->Add(new Button(wxString("operator"),id, wxString("="),m_buttonpad),0,wxEXPAND);
               }
                numb++;
           }
            id++;
        }
    }
  vbox->Add(m_display, 1, wxEXPAND | wxALL, 5);
  vbox->Add(m_buttonpad, 4, wxEXPAND | wxALL, 5);

  m_parent->SetSizer(vbox);

  this->Centre();
}
