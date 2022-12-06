#include "../inc/Zombie.h"

Zombie::Zombie(std::string name) {
    this->name = name;
    std::cout <<"Hello, I'm a zombie named " << name << std::endl;
}


void Zombie::announce() {
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << name << " - died" << std::endl;
}





