#ifndef EX02_FRAGTRAP_H
#define EX02_FRAGTRAP_H


#include "ClapTrap.h"

class FragTrap : public ClapTrap {

public:
    FragTrap(std::string name);
    FragTrap();
    ~FragTrap();
    FragTrap(const FragTrap &other);
    FragTrap &operator = (const FragTrap &other);
    void attack(std::string target);
    void highFivesGuys(void);
};


#endif //EX02_FRAGTRAP_H
