/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: ruler.cpp
    >Function: using recursion to subdivide a ruler
    >Created by Guozheng Wang on 2021/11/28
***************************************************************************/
#include <iostream>
const int Len = 66;
const int Divs = 6;
void subdivide(char ar[], int low, int high, int level);
int main(){
    char ruler[Len];
    int i;
    for (int j = 0; j < Len - 2; ++j) {
        ruler[i] =' ';
    }
    ruler[Len - 1] = '\0';
    int max = Len - 2;
    int min = 0;
    ruler[min] = ruler[max] = '|';
    std::cout << ruler << std::endl;
    for (int k = 1; k <= Divs; ++k) {
        subdivide(ruler, min, max, i);
        std::cout << ruler << std::endl;
        for (int j = 1; j < Len-2; ++j) {
            ruler[j] = ' '; // reset to blank ruler
        }
        return 0;
    }
}
void subdivide(char ar[], int low, int high, int level){
    if(level == 0){
        return;
    }
    int mid = (high + low) / 2;
    ar[mid] = '|';
    subdivide(ar, low, mid, level - 1);
    subdivide(ar, mid, high, level - 1);
}
