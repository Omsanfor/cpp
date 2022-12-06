#ifndef EX00_ZOMBIE_H
#define EX00_ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {
private:
    std::string name;
public:
    Zombie(std::string name);
    ~Zombie();
    void announce();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif //EX00_ZOMBIE_H
