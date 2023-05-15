//
// Created by soen0 on 29.04.2023.
//

#ifndef ZAD4SHAPEDRAWING_DLASTUDENTOW_SHAPECOMPOSITE_H
#define ZAD4SHAPEDRAWING_DLASTUDENTOW_SHAPECOMPOSITE_H

#include <utility>

#include "shape.h"







class Shapes::ShapeComposite : public Shapes::Shape{

    std::shared_ptr<Shape> shape1;
    std::shared_ptr<Shape> shape2;
    Shapes::ShapeOperation type;


public:
    ShapeComposite( std::shared_ptr<Shape> s1, std::shared_ptr<Shape> s2, Shapes::ShapeOperation type1={}): shape1(std::move(s1)), shape2(std::move(s2)) , type(type1){}

    bool isIn(int x, int y) const override;





























};


#endif //ZAD4SHAPEDRAWING_DLASTUDENTOW_SHAPECOMPOSITE_H
