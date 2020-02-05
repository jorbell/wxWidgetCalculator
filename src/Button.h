#ifndef BUTTON_H
#define BUTTON_H
#include "Display.h"
#include "ButtonPad.h"
#include <wx/wx.h>
class Button : public wxButton
{
    public:
        int m_id;
        ButtonPad *m_buttonpad;
        wxString m_label;
        wxString m_type;
        Button(wxString type,int id,wxString label,ButtonPad *buttonpad);
        
    private:
        void OnClick(wxCommandEvent & event);
    
};
#endif
