#include "entity.h"

Entity::Entity(float x, float y){
    this->X = x;
    this->Y = y;
}

Entity::Entity(){
    
}

std::ostream& operator<<(std::ostream& cout, Entity e){
    cout<<"X: "<<e.X<<"\nY: "<<e.Y<<std::endl;
    return cout;
}