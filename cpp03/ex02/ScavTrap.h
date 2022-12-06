#ifndef EX02_SCAVTRAP_H
#define EX02_SCAVTRAP_H


#include "ClapTrap.h"
#include <string>
#include <iostream>

class ScavTrap : public ClapTrap {
public:
    ScavTrap(std::string name);
    ScavTrap();
    ScavTrap(const ScavTrap &other);
    ScavTrap &operator = (const ScavTrap &other);
    ~ScavTrap();

    //Override
    void attack(std::string target);
    void guardGate();
};


#endif //EX02_SCAVTRAP_H
