#ifndef EX03_WEAPON_H
#define EX03_WEAPON_H
#include <iostream>

class Weapon {
private:
    std::string type;
public:
    Weapon(const std::string &type);
    ~Weapon();

    const std::string &getType();
    void setType(const std::string &type);
};

#endif //EX03_WEAPON_H
