#ifndef ENTITY_H
#define ENTITY_H
#include <iostream>

class Entity{
    public:
        Entity(float, float);
        Entity();
        float X;
        float Y;
        //vitual
        virtual void Move() = 0;
};
#endif