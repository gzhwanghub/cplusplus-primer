/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: atrctfun.cpp
    >Function: function with a structure argument
    >Created by Guozheng Wang on 2021/11/28
***************************************************************************/
#include <cmath>
#include <iostream>
// structure declarations
struct polar{
    double distance;        // distance from origin
    double angel;           // direction from origin
};
struct rect{
    double x;               // horizontal distance from origin
    double y;           // vertical distance from origin
};

// prototype
polar rect_to_polar(rect xypos);

void show_polar(polar dapos);
int main(){
    using namespace std;
    rect rplace;
    polar pplace;
    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y) {       // slick use of cin
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
    return 0;
}
// convert rectangular to polar coordinates
polar rect_to_polar(rect xypos){
    using namespace std;
    polar answer;
    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angel = atan2(xypos.y, xypos.x);
    return answer;          // returns a polar structure
}

// show polar coordinates, converting angle to degrees
void show_polar(polar dapos){
    using namespace std;
    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angel * Rad_to_deg;
    cout << " degrees\n";
}