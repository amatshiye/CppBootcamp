#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"
#include <cstdlib>

class ZombieEvent
{
    public:
        ZombieEvent();
        ~ZombieEvent();

        void setZombieType(std::string type);
        Zombie* newZombie(std::string name);
        Zombie* randomChump(void);

        std::string zombieType;
};

#endif