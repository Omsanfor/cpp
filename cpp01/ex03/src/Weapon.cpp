#include "../inc/Weapon.h"


Weapon::Weapon(const std::string &type) : type(type) {}

Weapon::~Weapon() {
}

const std::string &Weapon::getType()  {
    return type;
}

void Weapon::setType(const std::string &type) {
    Weapon::type = type;
}


