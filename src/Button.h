#ifndef BUTTON_H
#define BUTTON_H
#include "Panels.h"
#include <wx/wx.h>
class Button : wxButton
{
    public:
        int id;
        int x;
        int y;
        BottomPanel *m_bp;
        TopPanel *m_tp;
        wxString m_label;
        wxString type;
        wxButton *m_button;
        Button(wxString type,int id,int x, int y, wxString label,BottomPanel *m_bp, TopPanel *m_tp);
        
    private:
        void OnClick(wxCommandEvent & event);
    
};
#endif
