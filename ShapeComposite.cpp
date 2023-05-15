//
// Created by soen0 on 29.04.2023.
//

#include "ShapeComposite.h"


bool Shapes::ShapeComposite::isIn(int x, int y) const {
    if(type == Shapes::ShapeOperation::INTERSECTION){
        if(shape1->isIn(x,y) and shape2->isIn(x,y)){
            return true;
        }
        else{
            return false;
        }
    }
    else if(type == Shapes::ShapeOperation::SUM){
        if(shape1->isIn(x,y) or shape2->isIn(x,y)){
            return true;
        }
        else{
            return false;
        }
    }
    else if (type == Shapes::ShapeOperation::DIFFERENCE){
        if( shape1->isIn(x,y) xor shape2->isIn(x,y) ){
            return true;
        }
        else{
            return false;
        }
    }
    else{return false;}
}
