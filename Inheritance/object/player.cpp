#include "player.h"

Player::Player(float x, float y, const char* name) : Entity::Entity(x, y){
    this->name = name;
}

Player::Player(){
    this->X = 0.0f;
    this->Y = 0.0f;
    this->name = "NaN";
}

void Player::Move(){
    std::cout<<this->name<<" it moved."<<std::endl;
}

void Player::Attack() {
    std::cout<<this->name<<" attack!"<<std::endl;
}

std::ostream& operator<<(std::ostream& cout, Player p){
    cout<<"X: "<<p.X<<"\nY: "<<p.Y<<"\nName: "<<p.name<<std::endl;
    return cout;   
}