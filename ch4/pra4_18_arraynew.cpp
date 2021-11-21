/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: arraynew.cpp
    >Function: using the new operator for arrays
    >Created by Guozheng Wang on 2021/11/14
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    double *p3 = new double[3]; // space for 3 doubles
    p3[0] = 0.2;                // treat p3 like an array name
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1;                // increment the pointer
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1;
    delete []p3;                // free the memory
    return 0;
}
