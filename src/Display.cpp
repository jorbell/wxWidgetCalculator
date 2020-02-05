#include <wx/stattext.h>
#include "Display.h"
#include "Communicate.h"

Display::Display(wxPanel * parent)
       : wxPanel(parent, wxID_ANY, wxDefaultPosition, 
         wxSize(30, 150), wxBORDER_SUNKEN)
{
    m_text = new wxStaticText(this, -1, wxT("0"), wxPoint(0, 0));
}
void Display::HandleNumbers(wxString number){
    if(!m_operator){
        m_number1 = m_number1 + number;
        m_text->SetLabel(m_number1 + wxT("\n") + m_previousPrint);
    }else{
        m_number2 = m_number2 + number;
        m_text->SetLabel(m_number1 +wxT(" ")+ m_operator +wxT(" ")+ m_number2 + wxT("\n") + m_previousPrint);
    } 
}
void Display::HandleOperator(wxString operation){
    if(operation == wxString("=")){
            value1 = wxAtof(m_number1);
            value2 = wxAtof(m_number2);
            if (m_operator == wxString("+")){
                result = value1 + value2; 
            }else if (m_operator == wxString("-")) {
                result = value1 - value2; 
            }else if (m_operator == wxString("*")) {
                result = value1 * value2; 
            }else if (m_operator == wxString("/")) {
                result = value1 / value2; 
            }

            m_previousPrint = m_number1 +wxT(" ")+ m_operator +wxT(" ")+ m_number2 + wxT(" = ") + wxString::Format(wxT("%f"), result )+ wxT("\n") +m_previousPrint ;
            m_text->SetLabel(m_previousPrint);
            m_number1 = wxString();
            m_number2 = wxString();
            m_operator = wxString();
    
    }else{
        m_operator = operation;
        m_text->SetLabel(m_number1 + wxT(" ") + operation + wxT("\n") + m_previousPrint);
    }
    
}
