//
// Created by soen0 on 29.04.2023.
//

#include "rectangle.h"



 // Shapes
bool Shapes::Rectangle::isIn(int x, int y) const {
    if(x >= p1.x_ and x<=p2.x_ and y >= p1.y_ and y <= p2.y_){
        return true;
    }
    else{
        return false;
    }
}
