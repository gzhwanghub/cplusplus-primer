/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: ifelseif.cpp
    >Function: using if else if else
    >Created by Guozheng Wang on 2021/11/21
***************************************************************************/
#include <iostream>
const int Fave = 27;
int main(){
    using namespace std;
    int n;
    cout << "Enter a number in the range 1-100 to find ";
    cout << "My favorite number: ";
    do{
        cin >> n;
        if(n < Fave){
            cout << "To low -- guess again: ";
        }else if(n > Fave){
            cout << "Too high -- guess again: ";
        }else{
            cout << Fave << " is right !\n";
        }
    }while(n != Fave);
    return 0;
}
