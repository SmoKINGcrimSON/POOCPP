#ifndef PLAYER_H
#define PLAYER_H

#include "entity.h"

class Player : public Entity{
    public:
        const char* name;
        Player(float, float, const char*);
};

extern std::ostream& operator<<(std::ostream&, Player);
#endif