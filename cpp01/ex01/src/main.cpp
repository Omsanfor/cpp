#include <iostream>
#include "../inc/Zombie.h"

int main() {
    int count = 10;
    Zombie *horde = zombieHorde(count, "Horde");
    if (!horde) {
        std::cout << "Error..." << std::endl;
        return 0;
    }
    for (int i = 0; i < count; i++) {
        horde[i].announce();
    }
    delete[] horde;
}
