/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: and.cpp
    >Function: using the logical AND operator
    >Created by Guozheng Wang on 2021/11/21
***************************************************************************/
#include <iostream>
const int ArSize = 6;
int main(){
    using namespace std;
    float naaq[ArSize];
    cout << "Enter the NAAQs (New Age Awareness Quotients) "
         << "of\nyour neighbors. Program terminates "
         << "when you make\n" << ArSize << " entries "
         << "or enter a negative value.\n";
    int i = 0;
    float temp;
    cout << "First value: ";
    cin >> temp;
    while(i < ArSize && temp >= 0){ // 2 quitting criteria
        naaq[i] = temp;
        ++i;
        if(i < ArSize){         // room left in the array
            cout << "Next value: ";
            cin >> temp;        // so get next value
        }
    }
    if(i == 0){
        cout << "No data-bye\n";
    }else{
        cout << "Enter your NAAQ: ";
        float you;
        cin >> you;
        int count = 0;
        for(int j = 0; j < i; j++){
            if(naaq[j] > you)
                ++count;
        }
        cout << count;
        cout << " of your neighbors have greater awareness of\n"
        << " the Neww Age than you do.\n";
    }
    return 0;
}
