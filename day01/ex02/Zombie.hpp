#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
    Zombie();
    ~Zombie();
    
    std::string name;
    std::string type;

    public:
        void announce();
};

#endif