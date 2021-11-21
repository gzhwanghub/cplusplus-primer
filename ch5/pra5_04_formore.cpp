/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: formore.cpp
    >Function: more looping with for
    >Created by Guozheng Wang on 2021/11/21
***************************************************************************/
#include <iostream>
const int ArSize = 16;      //example of external declaration
int main(){
    long long factorizals[ArSize];
    factorizals[1] = factorizals[0] = 1LL;
    for (int i = 2; i < ArSize; ++i) {
        factorizals[i] = i * factorizals[i-1];
    }
    for (int i = 0; i < ArSize; ++i) {
        std:: cout << i << "! = " << factorizals[i] << std::endl;
    }
    return 0;
}
