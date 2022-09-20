#include <iostream>
#include "objectplayer.h"

int main(){
    Player p(12.0f, 14.7, "fernando");
    std::cout<<p;
    p.Move();
    p.Attack();
    return 0;
}