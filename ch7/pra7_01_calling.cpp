/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: calling.cpp
    >Function: defining, prototyping, and calling a function
    >Created by Guozheng Wang on 2021/11/28
***************************************************************************/
#include <iostream>
void simple();      // funciton prototype
int main(){
    using namespace std;
    cout << "main() will call the simple() function:\n";
    simple();       // function call
    cout << "main() is finished with the simple() function.\n";
    // cin.get()
    return 0;
}
// function definition
void simple()
{
    using namespace std;
    cout << "I'm but a simple function.\n";
}