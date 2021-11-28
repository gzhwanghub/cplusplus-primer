/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: cingolf.cpp
    >Function: non-numeric input skipped
    >Created by Guozheng Wang on 2021/11/27
***************************************************************************/
#include <iostream>
const int Max = 5;
int main(){
    using namespace std;
    // get data
    int golf[Max];
    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds.\n";
    int i;
    for (int i = 0; i < Max; ++i) {
        cout << "round #" << i+1 << ": ";
        while(!(cin >> golf[i])){
            cin.clear();        // reset input
            while(cin.get() != '\n')
                continue;       // get rid of bad input
            cout << "Please enter a number: ";
        }
    }
    // calculate average
    double total = 0.0;
    for (int i = 0; i < Max; ++i) {
        total += golf[i];
    }
    // report results
    cout << total / Max << " = avarage score "
    << Max << " rounds\n";
    return 0;
}
