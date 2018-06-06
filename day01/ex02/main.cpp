#include "ZombieEvent.hpp"

int main(void)
{
    ZombieEvent event;

    event.setZombieType("Ghoul");
    Zombie* zomb = event.randomChump();
    std::cout << std::endl;    
    
    Zombie* zomb2 = event.randomChump();
    std::cout << std::endl;    
    Zombie* zomb3 = event.randomChump();
    
    
    //std::cout << zomb << std::endl;
    std::cout << std::endl;
    delete zomb;
    delete zomb2;
    delete zomb3;
    return (0);
}