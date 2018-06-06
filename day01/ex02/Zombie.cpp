#include "Zombie.h"

Zombie::Zombie()
{
    std::cout << "A Zombie is born. Yey\n";
}

Zombie::~Zombie()
{
    std::cout << "..A Zombie died\n";
}

void Zombie::announce()
{
    std::cout << this->name << " " << this->type << " Braiiiiiiiiiiinnnnnns\n";
}