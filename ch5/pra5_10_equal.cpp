/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: equal.cpp
    >Function: equality vs assignment
    >Created by Guozheng Wang on 2021/11/21
***************************************************************************/
#include <iostream>
int main(){
    using namespace std;
    int quizscored[10] = {20, 20, 20, 20, 19, 20, 18, 20, 20};
    cout << "Doing it right:\n";
    int i;
    for (i = 0; quizscored[i] == 20 ; ++i) {
        cout << "quiz " << i << " is a 20\n";
    }
       // Warning: you may prefer reading about this program
       // to actually running it
    cout << "Doing it dangerously wrong:\n";
    for (i = 0; quizscored[i] = 20 ; ++i) {
        cout << "quiz " << i << "is a 20\n";
    }
    return 0;
}
