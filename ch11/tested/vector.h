/***************************************************************************
    >Copyright (c) 2022 [Guozheng Wang <gzh.wang@outlook.com>]
    >Filename: vector.h
    >Function: Vector class with <<, mode-state
    >Created by Guozheng Wang on 2022/1/9
***************************************************************************/

#ifndef CPLUSPLUS_PRIMER_VECTOR_H
#define CPLUSPLUS_PRIMER_VECTOR_H
#include <iostream>
namespace VECTOR{
    class Vector {
    public:
        enum Mode{RECT, POL};
        // RECT for rectangular, POL for Polar modes
    private:
        double x;       // horizontal value;
        double y;       // vertival value;
        double msg;     // hength of vector;
        double ang;     // direction of vector in degrees
        Mode mode;      // RECT or POL
        // private methods for setting values
        void set_msg();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        double xval()const{return x;}   // report x value
        double yval()const{return y;}   // report y value
        double magval()const{return msg;}   // report magnitude
        double angval()const{return ang;}   // report angle
        void polar_mode();              // set mode to POL
        void rect_mode();               // set mode to RECT
        // operator overloading
        Vector operator+(const Vector& b)const;
        Vector operator-(const Vector& b)const;
        Vector operator-()const;
        Vector operator*(double n)const;
        // friends
        friend Vector operator*(double n, const Vector& a);
        friend std::ostream& operator<<(std::ostream& os, const Vector& v);
    };












}




#endif //CPLUSPLUS_PRIMER_VECTOR_H
