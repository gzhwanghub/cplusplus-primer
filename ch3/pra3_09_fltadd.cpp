/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: pro3_09_fltadd.cpp
    >Function: fltadd.cpp -- precision problem with float
    >Created by Guozheng Wang on 2021/11/7
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float a = 2.34E+22f;
    float b = a + 1.0f;

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;
    return 0;
}
