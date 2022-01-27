/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: usetime3.cpp
    >Function: using the fourth draft of the time class
    >Created by Guozheng Wang on 2022/1/9
***************************************************************************/
#include <iostream>
#include "mytime3.h"

int main(){
    using std::cout;
    using std::endl;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;
    cout << "Aida and Tosca:\n";
    cout << aida << ": " << tosca << endl;
    temp = aida + tosca; // operator+()
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida * 1.17; // member operator*()
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10 * Tosca: " << 10.0 * tosca << endl;
    temp = aida - tosca; // operator-()
    cout << "Aida - Tosca: " << temp << endl;
}
