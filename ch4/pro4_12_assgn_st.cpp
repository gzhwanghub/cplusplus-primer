/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: assgn_st.cpp
    >Function: assigning structures
    >Created by Guozheng Wang on 2021/11/14
***************************************************************************/
#include <iostream>
struct inflatation{
    char name[20];
    float volume;
    double price;
};

struct perks{
    int key_number;
    char car[12];
} mr_glitz ={
        7,
        "Packard"
};

int main(){
    using namespace std;
    inflatation bouquet = {
            "sunflower",
            0.20,
            12.49
    };
    inflatation choice;
    cout << "bouquet: " << bouquet.name << "for $";
    cout << bouquet.price << endl;

    choice = bouquet; // assign one structure to another
    cout << "choice: " << choice.name << "for $";
    cout << choice.price << endl;
    return 0;
}
