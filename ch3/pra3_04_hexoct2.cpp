/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: pro_3_04_hexoct2.cpp
    >Function: 
    >Created by Guozheng Wang on 2021/10/24
***************************************************************************/
#include <iostream>
using namespace std;
int main(){
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;
    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;
    cout << "waist = " << waist << "(hexadecimal for 42)" <<endl;
    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    return 0;
}
