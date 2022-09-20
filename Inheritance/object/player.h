#ifndef PLAYER_H
#define PLAYER_H

#include "entity.h"
#include "../interfaces/IBattle.h"

class Player : public Entity, IBattle{
    public:
        const char* name;
        Player(float, float, const char*);
        Player();
        //virtual
        void Move() override;
        void Attack() override;
};

extern std::ostream& operator<<(std::ostream&, Player);
#endif