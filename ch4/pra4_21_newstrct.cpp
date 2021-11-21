/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: newstrct.cpp
    >Function: using new with a structure
    >Created by Guozheng Wang on 2021/11/14
***************************************************************************/
#include <iostream>
struct inflatable{              // structure definition
    char name[20];
    float volume;
    double price;
};
int main(){
    using namespace std;
    inflatable *ps = new inflatable;  // allot memory for structure
    cout << "Enter name fo inflatable iter: ";
    cin.get(ps->name, 20);         // method 1 for member access
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;              // method 2 for member access
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;     // method2
    cout << "Volume: " << ps->volume << " cubic feet\n"; // method1
    cout << "Price: $" << ps->price << endl;    // method 1
    delete ps;                                  // free memory used bu structure
    return 0;
}

