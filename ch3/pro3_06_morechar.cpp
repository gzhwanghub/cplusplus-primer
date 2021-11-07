/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: pro3_06_morechar.cpp
    >Function: 
    >Created by Guozheng Wang on 2021/10/24
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i <<endl;

    cout << "Add one to the character code: " << endl;
    ch = ch +1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Displaying char ch using cout.put(ch): " << endl;
    cout.put(ch);
    cout.put('!');
    cout << endl << "Done" << endl;
    return 0;
}
