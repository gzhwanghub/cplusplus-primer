/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: pro3_03_hexoct.cpp
    >Function: 
    >Created by Guozheng Wang on 2021/10/24
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;
    // "cout" obviously output decimal integer value
    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << "inseam = " << inseam << " (042 in octal)\n";
    return 0;
}
