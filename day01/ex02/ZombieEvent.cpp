#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {}
ZombieEvent::~ZombieEvent() {}

void ZombieEvent::setZombieType(std::string type)
{
    zombieType = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie* zombie = new Zombie();

    zombie->name = name;
    zombie->type = zombieType;
    return (zombie);
}

Zombie* ZombieEvent::randomChump(void)
{
    std::string zombies[] = {"Eater", "BrainLust", "Devour"};

    Zombie* zombie = newZombie(zombies[rand() % 3]);
    zombie->announce();
    return (zombie);
}