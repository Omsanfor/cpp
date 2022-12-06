#include "../inc/Zombie.h"

void randomChump( std::string name ) {
    Zombie secondZombie(name);
    secondZombie.announce();
}