/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: lotto.cpp
    >Function: probability of winning
    >Created by Guozheng Wang on 2021/11/28
***************************************************************************/
#include <iostream>
// Note: some implementations require double instead of loog double
long double probability(unsigned numbers, unsigned picks);
int main(){
    using namespace std;
    double total, choices;
    cout << "Enter the total number of choices on the game card and\n"
            "the number of picks allowed:\n";
    while((cin >> total >> choices) && choices <= total){
        cout << "You have one change in ";
        cout << probability(total, choices);    // compute the odds
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }
    cout << "bye\n";
    return 0;
}
// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks){
    long double results = 1.0;  // here come some local variables
    long double n;
    unsigned p;
    for(n = numbers, p = picks; p > 0; n--, p--){
        results = results * n / p;
    }
    return results;
}