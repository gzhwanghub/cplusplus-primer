/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: arrstruc.cpp
    >Function: an array of structures
    >Created by Guozheng Wang on 2021/11/14
***************************************************************************/
#include <iostream>
struct inflatation{
    char name[20];
    float volume;
    double price;
};
int main(){
    using namespace std;
    inflatation guests[2] = {                           //initializing an array of structs
            {"Bambi", 0.5, 21.99},  //first structure in array
            {"Godzilla", 2000, 565.99}
    };

    cout << "The guests " << guests[0].name << " and " << guests[1].name
         << "\nhave a combined valume of "
         << guests[0].volume + guests[1].volume << " cubic feet.\n";
    return 0;
}
