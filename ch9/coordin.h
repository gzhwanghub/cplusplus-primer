/***************************************************************************
    >Copyright (c) 2021 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: coordin.h
    >Function: structure templates and function prototypes
    >Created by Guozheng Wang on 2021/12/26
***************************************************************************/

#ifndef CPLUSPLUS_PRIMER_COORDIN_H
#define CPLUSPLUS_PRIMER_COORDIN_H
struct polar{
    double distance;    // distance from origin
    double angle;       // direction from origin
};
struct rect{
    double x;       // horizontal distance from origin
    double y;       // vertical distance from origin
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
#endif //CPLUSPLUS_PRIMER_COORDIN_H
