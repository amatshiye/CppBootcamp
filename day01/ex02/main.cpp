#include "ZombieEvent.hpp"

int main(void)
{
    ZombieEvent event;

    event.setZombieType("Ghoul");
    Zombie* zomb = event.randomChump();
    
    //std::cout << zomb << std::endl;
    delete zomb;
    return (0);
}