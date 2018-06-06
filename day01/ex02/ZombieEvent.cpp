#include "ZombieEvent.hpp"
#include "Zombie.hpp"

void ZombieEvent::setZombieType(std::string type)
{
    zombieType = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie* zombie = newZombie("Eater_X");

    zombie.name = name;
    zombie.type = zombieType;

    return (zombie); //return a Zombie object
}