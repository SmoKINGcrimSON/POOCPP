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
        virtual void Move();
};

extern std::ostream& operator<<(std::ostream&, Entity);
#endif