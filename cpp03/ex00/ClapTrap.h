#ifndef EX00_CLAPTRAP_H
#define EX00_CLAPTRAP_H


#include <string>
#include <iostream>


class ClapTrap {
private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
public:
    ClapTrap(std::string name);
    ClapTrap();
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator = (const ClapTrap &other);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName() const;
    int getHitPoints() const;
    int getEnergyPoints() const;
    int getAttackDamage() const;


};


#endif //EX00_CLAPTRAP_H
