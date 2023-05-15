#ifndef ENEMY_H
#define ENEMY_H

#include "object.h"

/**
 * Proszę o utworzenie klasy `Enemy`, która będzie dziedziczyć po klasie `Object`
 * - Klasa ta powinna mieć mieć składową odpowiadającą ilości punktów życia, oraz getter: `lifePercent()`
 * - Klasa powinna mieć konstruktor przyjmujący aktualną pozycje oraz maksymalne życie z wartością domyślną.
 * - Klasa powinna mieć metodę `isAlieve()` która zwraca prawdę jeśli wróg ma życie powyżej zera
 * - Klasa powinna mieć metodę `decreaseLife()` przyjmującą jako argument liczbę obrażeń
 * - Po zaimplementowaniu powyższego proszę zakomentować makro `UNIMPLEMENTED_enemy`
 */



class Enemy : public Object
{
    double hp,maxhp;

public:
    double lifePercent() const{
        return (hp/maxhp)*100;
    }
    explicit Enemy(Position pos,double maxhp1=37): Object(ObjectType::OBJECT_ENEMY,pos) ,hp(maxhp1),maxhp(maxhp1){
    }
    bool isAlieve() const{
        if(hp>0) return true;
        else return false;
    }
    void decreaseLife(double damage){
        hp=maxhp-damage;
    }


};

#endif // ENEMY_H
