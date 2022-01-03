/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: usetime0.cpp
    >Function: using the first draft of the Time class, compile usetime0.cpp
    // and mytime0.cpp together
    >Created by Guozheng Wang on 2022/1/3
***************************************************************************/
#include <iostream>
#include "mytime0.h"

int main(){
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2,40);
    Time fixing(5, 55);
    Time total;

    cout << "planning time = ";
    planning.Show();
    cout << endl;

    cout << "coding time = ";
    coding.Show();
    cout << endl;

    cout << "Fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding.Sum(fixing);
    cout << "coding.Sum(fixing) = ";
    total.Show();
    cout << endl;

    return 0;
}
