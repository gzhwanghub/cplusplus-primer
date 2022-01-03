/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: file2.cpp
    >Function: contains functions called in file1.cpp
    >Created by Guozheng Wang on 2021/12/26
***************************************************************************/
#include <iostream>
#include <cmath>
#include "coordin.h"    // structure templates, function prototypes

// convert rectangular to polar coordinates
palar rect_to_polar(rect xypos){
    using namespace std;
    polar answer;
    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;      // returns a polar structure
}

// show polar coordinates, converting angle to degress
void show_polar(polar dapos){
    using namespace std;
    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees\n";
}
