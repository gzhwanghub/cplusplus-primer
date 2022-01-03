/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: external.cpp
    >Function: external variables
    >Created by Guozheng Wang on 2021/12/26
***************************************************************************/
#include <iostream>
using namespace std;
// external variable
double warning = 0.3;       // warning defined
// function prototypes
void update(double dt);
void local();

int main(){                 // uses global variable
    cout << "Global warning is " << warning << " degrees.\n";
    update(0.1);        // call function to change warning
    cout << "Global warning is " << warning << " degrees.\n";
    local();                // call function with local warning
    cout << "Global warning is " << warning << " degrees.\n";
    return 0;
}
