/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: usetime2.cpp
    >Function: using the third draft of the Time class
    >Created by Guozheng Wang on 2022/1/3
***************************************************************************/
#include <iostream>
#include "mytime2.h"
int main(){
    using std::cout;
    using std::endl;
    Time weeding(4, 35);
    Time waxing(2, 47);
    Time total;
    Time diff;
    Time adjusted;

    cout << "weeding time = ";
    weeding.Show();
    cout << endl;

    cout << "waxing time = ";
    waxing.Show();
    cout << endl;

    cout << "total work time = ";
    total = weeding + waxing; // use operator+()
    total.Show();
    cout << endl;

    diff = weeding -  waxing; // use operator-()
    cout << "weeding time - waxing time = ";
    diff.Show();
    cout << endl;

    adjusted = total * 1.5;   // use operator*()
    cout << "adjusted work time = ";
    adjusted.Show();
    cout << endl;
    return 0;
}
