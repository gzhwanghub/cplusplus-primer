/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: file1.cpp
    >Function: example of a three file program
    >Created by Guozheng Wang on 2021/12/26
***************************************************************************/
#include <iostream>
#include "coordin.h"    // structure templates, function prototypes
using namespace std;
int main(){
    rect rplace;
    polar pplace;
    cout << "Enter the x and y values: ";
    while(cin >> rplace.x >> rplace.y)      // slick use of cin
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers (q to quite): ";
    }
    cout << "Bye!\n";
    return 0;
}
