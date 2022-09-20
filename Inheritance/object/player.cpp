#include "player.h"

Player::Player(float x, float y, const char* name) : Entity::Entity(x, y){
    this->name = name;
}

std::ostream& operator<<(std::ostream& cout, Player p){
    cout<<"X: "<<p.X<<"\nY: "<<p.Y<<"\nName: "<<p.name<<std::endl;
    return cout;   
}