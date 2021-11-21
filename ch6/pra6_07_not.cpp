/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: not.cpp
    >Function: using the not operator
    >Created by Guozheng Wang on 2021/11/21
***************************************************************************/
#include <iostream>
#include <climits>
bool is_int(double);
int main(){
    using namespace std;
    double num;
    cout << "Yo, dude! Enter an integer value: ";
    cin >> num;
    while (!is_int(num)) // continue while num is not int able
    {
        cout << "Ou58t of range -- please try again: ";
        cin >> num;
    }
    int val = int(num); // type cast
    cout << "You've entered the integer " << val << "\nBye\n";
    return 0;
}
bool is_int(double x){
    if(x <= INT_MAX && x >= INT_MIN){
        return true;
    }else{
        return false;
    }

}
