#include "../inc/HumanB.h"


HumanB::HumanB(const std::string &name) : name(name) {}

HumanB::~HumanB() {

}

Weapon *HumanB::getWeapon()  {
    return weapon;
}

void HumanB::setWeapon(Weapon &weapon) {
    HumanB::weapon = &weapon;
}

void HumanB::attack() {
    if (!weapon) {
        std::cout << name << " has nothing to attack" << std::endl;

    } else {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }

}


