//
// Created by 西村智 on 2019-05-09.
//

#ifndef TEST_MYAPP_H
#define TEST_MYAPP_H

#include "../Lib/TestLib.h"

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

class MyApp: public wxApp
{
public:
    bool OnInit() override;
    int OnExit() override;
private:
    MyFrame* frame;
};


#endif //TEST_MYAPP_H
