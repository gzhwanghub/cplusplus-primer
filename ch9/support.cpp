/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: support.cpp
    >Function: use external variables
    >Created by Guozheng Wang on 2021/12/26
***************************************************************************/
#include <iostream>
extern double warming;  // use warming from aother file
// function prototypes
void update(double dt);
void local();

using std::cout;
void update(double dt){     // modifies global variable
    extern double warming;  // optional redclaration
    warming += dt;          // uses global warming
    cout << "Updating global warming to " << warming;
    cout << "degrees.\n";
}
void local(){       // uses local variable
    double warming = 0.8; // new variable hides external one
    cout << "Local warming = " << warming << " degrees.\n";
    // Access global variable with the scope resolution operator
    cout << "But global warming = " <<  :: warming;
    cout << " degrees.\n";
}
