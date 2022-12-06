#ifndef EX03_HUMANA_H
#define EX03_HUMANA_H


#include "Weapon.h"

class HumanA {
private:
    std::string name;
    Weapon &weapon;
public:
    HumanA(const std::string &name, Weapon &weapon);

    ~HumanA();
    void attack();
};


#endif //EX03_HUMANA_H
