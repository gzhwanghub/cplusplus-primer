/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: structur.cpp
    >Function: a simple structure
    >Created by Guozheng Wang on 2021/11/14
***************************************************************************/
#include <iostream>
struct inflatable{      // structure declaration
    char name[20];
    float volume;
    double price;
};

int main(){
    using namespace std;
    inflatable guest ={
            "Glorious Gloria",  //name value
            1.88,              //volume value
            29.99               // price value
    }; //guest is a structure variable variable of type inflatable
    // It's intialized to the indicated values
    inflatable pal = {
            "Audacious Arthur",
            3.12,
            32.99
    };  //pal is a second variable of type inflatable
    // NOTE: some implatations require using
    // static inflatable guest =
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    // pal.name is the name number of the pal variable
    cout << "You can have both for $";
    cout << guest.price + pal.price << ".\n";
    return 0;
}

