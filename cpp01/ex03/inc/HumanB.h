#ifndef EX03_HUMANB_H
#define EX03_HUMANB_H


#include "Weapon.h"

class HumanB {
    std::string name;
    Weapon *weapon;
    Weapon *getWeapon();
public:
    HumanB(const std::string &name);

    ~HumanB();

    void setWeapon(Weapon &weapon);

    void attack();
};


#endif //EX03_HUMANB_H
