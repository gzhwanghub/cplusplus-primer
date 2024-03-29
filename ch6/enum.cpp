/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: enum.cpp
    >Function: using enum
    >Created by Guozheng Wang on 2021/11/27
***************************************************************************/
#include <iostream>
// create named constants for 0-6
enum {red, orange, yellow, green, blue, violet, indigo};
int main(){
    using namespace std;
    cout << "Enter color code (0 - 6): ";
    int code;
    cin >> code;
    while(code >= red && code <= indigo){
        switch (code) {
            case red : cout << "Her lips were red.\n"; break;
            case orange: cout << "Her hair was orange.\n"; break;
            case yellow: cout << "Her shoes were yellow.\n"; break;
            case green: cout << "Her nails were green.\n"; break;
            case blue: cout << "Her sweatsuit was blue.\n"; break;
            case violet: cout << "Her eyes were violet.\n"; break;
            case indigo: cout << "Her mood was indigo.\n"; break;
        }
        cout << "Enter color code(0-6):";
        cin >> code;
    }
    cout << "Bye\n";
    return 0;
}
