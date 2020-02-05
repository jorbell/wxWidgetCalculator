#include "Button.h"
#include "Communicate.h"
#include <wx/stattext.h>
Button::Button(wxString type,int id,wxString label,ButtonPad *buttonpad) 
    : wxButton(buttonpad, id, label)
{
    this->m_type=type;
    //this->SetSize(30,30);
    this->m_id = id;
    this->m_buttonpad = buttonpad;
    this->m_label = label;
    Connect(id, wxEVT_COMMAND_BUTTON_CLICKED, 
        wxCommandEventHandler(Button::OnClick));

}
void Button::OnClick(wxCommandEvent & WXUNUSED(event)){
    Communicate *comm = (Communicate *) m_buttonpad->m_parent->GetParent();
    if (m_type == wxString("number")) {
        //comm->m_tp->m_text->SetLabel(m_label);
        comm->m_display->HandleNumbers(m_label);
        
    }else if (m_type == wxString("operator")) {
        comm->m_display->HandleOperator(m_label);
        
    }

}
