#ifndef PANELS_H
#define PANELS_H
#include <wx/wx.h>

class BottomPanel : public wxPanel
{
public:
    BottomPanel(wxPanel *parent);
    wxPanel *m_parent;

};

class TopPanel : public wxPanel
{
public:
    double value1;
    double value2;
    double result;
    wxString m_number1;
    wxString m_number2;
    wxString m_operator;
    wxString m_previousPrint;
    TopPanel(wxPanel *parent);

    void HandleOperator(wxString operation);
    void HandleNumbers(wxString number);

    void OnSetText(wxCommandEvent & event);

    wxStaticText *m_text;

};
#endif
