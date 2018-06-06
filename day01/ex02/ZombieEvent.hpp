#ifndef ZOMBIE_EVENT_H
#define ZOMBIE_EVENT_H

#include "Zombie.hpp"

class
{
    public:
        void setZombieType(std::string type);
        Zombie* newZombie(std::string name);

        std::string zombieType;
};

#endif