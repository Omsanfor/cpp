#ifndef EX01_ZOMBIE_H
#define EX01_ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {

private:
    static int zombieCount;
    std::string name;
public:
    Zombie();
    ~Zombie();

    void setName(std::string name);
    void announce();
};

Zombie* zombieHorde( int N, std::string name );

#endif //EX01_ZOMBIE_H
