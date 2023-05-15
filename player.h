#ifndef PLAYER_H
#define PLAYER_H

#include "object.h"
#include "direction.h"

/**
 * Proszę o utworzenie klasy `Player`, która będzie dziedziczyć po klasie `Object`, następnie proszę zakomentować `UNIMPLEMENTED_playerIsObject`
 * - Klasa ta powinna mieć mieć składową `direction_`, a także operujący na niej getter i setter. Domyślna wartość to `Direction::RIGHT`
 *    - po zdefiniowaniu proszę usunąć `UNIMPLEMENTED_playerHasDirection`
 * - Klasa powinna mieć składową oznaczającą czy gracz żyje, oraz getter i setter: `isAlieve()`, `setIsAlieve()`
 *    - po zdefiniowaniu proszę usunąć `UNIMPLEMENTED_playerCanDie`
 */

//#define UNIMPLEMENTED_playerIsObject


class Player : public Object
{
Direction direction_;
bool isalive;



public:
/*
    explicit Player(Direction dir=Direction::RIGHT): Object(ObjectType::OBJECT_PLAYER), direction_(dir){
        isalive=true;
    }*/
    Player(Direction dir=Direction::RIGHT,Position pos=Position(0,0)): Object(ObjectType::OBJECT_PLAYER,pos),direction_(dir){
        isalive=true;

    }

    Direction direction(){
        return direction_;
    }
    void setDirection(Direction dir){
        direction_=dir;
    }
    bool isAlieve(){
        return isalive;
    }
    void setIsAlieve(bool s){
        isalive=s;
    }
};

#endif // PLAYER_H
