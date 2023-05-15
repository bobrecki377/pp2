//
// Created by soen0 on 29.04.2023.
//

#ifndef ZAD4SHAPEDRAWING_DLASTUDENTOW_CIRCLE_H
#define ZAD4SHAPEDRAWING_DLASTUDENTOW_CIRCLE_H

#include "shape.h"

class Shapes::Circle: public Shapes::Shape {

    Shapes::Point S;
    int r;




public:
    bool isIn(int x, int y) const override;
    Circle(int xCenter=0, int yCenter=0, int radius=0): S(Shapes::Point(xCenter,yCenter)) , r(radius){}
    auto x() const{
        return S.x_;
    }
    auto y() const{
        return S.y_;
    }
    auto getRadius() const{
        return r;
    }





//xd
};


#endif //ZAD4SHAPEDRAWING_DLASTUDENTOW_CIRCLE_H
