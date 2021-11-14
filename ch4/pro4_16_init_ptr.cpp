/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: init_ptr.cpp
    >Function: initialize a pointer
    >Created by Guozheng Wang on 2021/11/14
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    int higgens = 5;
    int *pt = &higgens;
    cout << "Value of higgens = " << higgens
         << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt
         << "; Value of pt = " << pt << endl;
    return 0;
}
