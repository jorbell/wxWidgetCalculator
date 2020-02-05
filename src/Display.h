#ifndef DISPLAY_H
#define DISPLAY_H
#include <wx/wx.h>

class Display : public wxPanel
{
public:
    double value1;
    double value2;
    double result;
    wxString m_number1;
    wxString m_number2;
    wxString m_operator;
    wxString m_previousPrint;
    Display(wxPanel *parent);

    void HandleOperator(wxString operation);
    void HandleNumbers(wxString number);

    void OnSetText(wxCommandEvent & event);

    wxStaticText *m_text;

};
#endif
