//
// Created by 西村智 on 2019-05-08.
//

#include "TestLib.h"

#include <boost/format.hpp>
#include <iostream>

int testLib()
{
    unsigned int arr[5] = {0x05, 0x04, 0xAA, 0x0F, 0x0D};
    std::cout << EXPORT << std::endl;

    std::cout << boost::format("%02X-%02X-%02X-%02X-%02X")
                 % arr[0]
                 % arr[1]
                 % arr[2]
                 % arr[3]
                 % arr[4]
              << std::endl;

    return 0;
}

MyFrame::MyFrame(const wxString &title, const wxSize &size)
        : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(size))
{
    Center();
}


