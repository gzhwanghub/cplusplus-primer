/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: recur.cpp
    >Function: using recursion
    >Created by Guozheng Wang on 2021/11/28
***************************************************************************/
#include <iostream>
void countdown(int n);
int main(){
    countdown(4);       // call the recursive function
    return 0;
}
void countdown(int n){
    using namespace std;
    cout << "Counting down ... " << n << endl;
    if(n > 0){
        countdown(n-1); // function calls itself
    }
    cout << n << ": Kaboom!\n";
}