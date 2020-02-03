#include "Button.h"
#include "Communicate.h"
#include <wx/stattext.h>
Button::Button(wxString type,int id,int x, int y, wxString label, BottomPanel *m_bp, TopPanel *m_tp) : wxButton(m_bp, id, label, wxPoint(x, y))
{
    this->type=type;
    this->SetSize(30,30);
    this->id = id;
    this->m_bp = m_bp;
    this->m_tp = m_tp;
    this->m_label = label;
    Connect(id, wxEVT_COMMAND_BUTTON_CLICKED, 
        wxCommandEventHandler(Button::OnClick));

}
void Button::OnClick(wxCommandEvent & WXUNUSED(event)){
    Communicate *comm = (Communicate *) m_bp->m_parent->GetParent();
    if (type == wxString("number")) {
        //comm->m_tp->m_text->SetLabel(m_label);
        comm->m_tp->HandleNumbers(m_label);
        
    }else if (type == wxString("operator")) {
        comm->m_tp->HandleOperator(m_label);
        
    }

}
