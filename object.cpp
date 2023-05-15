#include "object.h"

Object::Object(ObjectType typex, Position positionx = Position(0,0)) : typees(typex) , positiones(positionx){
}
Object::Object(ObjectType typex): typees(typex) {
    positiones.x_=0;
    positiones.y_=0;
}

Position Object::position() const {
    return positiones;
}

ObjectType Object::type() {
    return typees;
}

void Object::setPosition(Position pos) {
    positiones.x_= pos.x_;
    positiones.y_= pos.y_;
}

Object Object::moveUp() {
    positiones.moveUp();
    return *this;
}

Object Object::moveDown() {
    positiones.moveDown();
    return *this;
}

Object Object::moveRight() {
    positiones.moveRight();
    return *this;
}

Object Object::moveLeft() {
    positiones.moveLeft();
    return *this;
}
