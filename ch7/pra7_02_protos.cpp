/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: protos.cpp
    >Function: using prototype and function calls
    >Created by Guozheng Wang on 2021/11/28
***************************************************************************/
#include <iostream>
void cheers(int);   // prototype: no return value
double cube(double x); // prototype: return a double
int main(){
    using namespace std;
    cheers(5);      // function call
    cout << "Give me a number: ";
    double side;
    cin >> side;
    double volume = cube(side); // function call
    cout << "A " << side << "-foot cube has a volume of ";
    cout << volume << " cubic feet.\n";
    cheers(cube(2));    // prototype protection at work
    return 0;
}
void cheers(int n){
    using namespace std;
    for (int i = 0; i < n; ++i) {
        cout << "Cheers! ";
    }
    cout << endl;
}

double cube(double x){
    return x * x * x;
}