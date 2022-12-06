#include "../inc/Zombie.h"

Zombie* newZombie( std::string name ) {
    Zombie *firstZombie = new (std::nothrow) Zombie(name);
    firstZombie->announce();
    return firstZombie;
}