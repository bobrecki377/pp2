//
// Created by soen0 on 29.04.2023.
//

#ifndef ZAD4SHAPEDRAWING_DLASTUDENTOW_RECTANGLE_H
#define ZAD4SHAPEDRAWING_DLASTUDENTOW_RECTANGLE_H


#include "shape.h"



class Shapes::Rectangle: public Shapes::Shape{

    Shapes::Point p1;
    Shapes::Point p2;



public:
    bool isIn(int x, int y) const override;
    Rectangle(int x,int y,int z,int t): p1(Shapes::Point(x,y)),p2(Shapes::Point(z,t)){}

    auto x() const{
        return p1.x_;
    }
    auto y() const{
        return p1.y_;
    }
    auto xTo() const{
        return p2.x_;
    }
    auto yTo() const{
        return p2.y_;
    }




























    };



#endif //ZAD4SHAPEDRAWING_DLASTUDENTOW_RECTANGLE_H
