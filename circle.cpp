//
// Created by soen0 on 29.04.2023.
//

#include "circle.h"


bool Shapes::Circle::isIn(int x, int y) const{
    if(   (x-S.x_)*(x-S.x_) + (y-S.y_)*(y-S.y_) <= r*r   ){
        return true;
    }
    else{
        return false;
    }
}




//xakniwriuwhriwurh



// (x-S.x_)^2+(y-S.y_)^2<=r^2