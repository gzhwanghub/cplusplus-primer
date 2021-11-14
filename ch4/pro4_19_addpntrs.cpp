/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: addpntrs.cpp
    >Function: pointer addition
    >Created by Guozheng Wang on 2021/11/14
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3,2,1};
    // Here are tow ways to get the address of an array
    double *pw = wages;  // name of an array = address
    short *ps = &stacks[0]; // or use address operator
    // with array element
    cout << "*pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "*pw =" << pw << ", *pw = " << "*pw" << "\n\n"
}
