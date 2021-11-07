/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: pro3_13_assign.cpp
    >Function: init.cpp --type changes on-initialization-
    >Created by Guozheng Wang on 2021/11/7
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3; // int converted to float
    int guess{3}; //double converted to int
    int debt = 7.2E12; //result not defined in C++
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    return 0;
}
