//
// Created by 西村智 on 2019-05-09.
//

#include "MyApp.h"
#include "Compiler.h"

bool MyApp::OnInit()
{
    std::cout << CompilerString() << std::endl;

    testLib();

    frame = new MyFrame("Compiled With: " + CompilerString(), wxSize(1366, 768));
    frame->Show(true);
    return true;
}

int MyApp::OnExit()
{
    std::cout << "App Exit" << std::endl;
    return 0;
}
