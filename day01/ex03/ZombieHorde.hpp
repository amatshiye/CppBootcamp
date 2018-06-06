#ifndef ZOMBIE_HORDE_H
#define ZOMBIE_HORDE_H

#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>

class ZombieHorde
{
    public:
        ZombieHorde(int N);
        ~ZombieHorde();

        void announce(void); //to call announce()
        Zombie*     zombies;
        int         num;
};

#endif