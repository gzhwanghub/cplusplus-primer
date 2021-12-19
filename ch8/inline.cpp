/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: inline.cpp
    >Function: using an inline function
    >Created by Guozheng Wang on 2021/12/5
***************************************************************************/
#include <iostream>

// an inline function definition
inline double square(double x){return x * x;}

int main(){
    using namespace std;
    double a, b;
    double c = 13.0;

    a = square(5.0);
    b = square(4.5 + 7.5);      // can pass expressions
    cout << "a = " << a << ", b = " << b << "\n";
    cout << "c = " << c;
    cout << ", c squared = " << square(c++) << "\n";
    cout << "Now c = " << c << "\n";
    return 0;
}
