#ifndef PLAYER_H
#define PLAYER_H

#include "entity.h"

class Player : public Entity{
    public:
        const char* name;
        Player(float, float, const char*);
        Player();
        //virtual
        void Move() override;
};

extern std::ostream& operator<<(std::ostream&, Player);
#endif