/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: ifelse.cpp
    >Function: using the if else statement
    >Created by Guozheng Wang on 2021/11/21
***************************************************************************/
#include <iostream>
int main(){
    char ch;
    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);
    while (ch !='.'){
        if (ch == '\n')
            std::cout << ch;    // done if newline
        else
            std::cout << ++ch;  // done otherwise
        std::cin.get(ch);
    }
    // try ch+1 instead of ++ch for interesting effect
    std::cout << "\nPlease excuse the slight confusion.\n";
        // std::cin.get();
        // std::cin.get();
    return 0;

}
