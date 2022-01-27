/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: stone1.cpp
    >Function: user-defined conversion function
    >Created by Guozheng Wang on 2022/1/13
***************************************************************************/
#include <iostream>
using std::cout;
#include "stonewt.h"
void display(const Stonewt& st, int n);
int main(){
    Stonewt incognito = 275;    // use constructor to initialize
    Stonewt wolfe(285.7);       // same as Stonewt wolfe = 285.7
    Stonewt taft(21,8);

    cout << "The celebrity weighed ";
    incognito.show_stn();
    cout << "The detective weighed ";
    wolfe.show_stn();
    cout << "The President weighed ";
    taft.show_lbs();
    incognito = 276.8;          // uses constructor for conversion
    taft = 325;                 // same as taft = Stonewt(325);
    cout << "After dinner, the celebrity weighed ";
    incognito.show_stn();
    cout << "After dinner, the President weight ";
    taft.show_lbs();
    display(taft, 2);
    cout << "The wrestler weighed even more.\n";
    display(422, 2);
    cout << "No stone left unearned\n";
    return 0;
}
void display(const Stonewt& st, int n){
    for(int i = 0; i < n; i++){
        cout << "Wow! ";
        st.show_stn();
    }
}