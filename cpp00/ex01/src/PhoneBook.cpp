//
// Created by Omelette Sanford on 10/19/22.
//
#include <iostream>
#include <istream>
#include <cstdlib>
#include "../inc/PhoneBook.h"

void PhoneBook::search() {
    for (int i = 0; i < count2; ++i) {
    std::cout << "index: " << contacts[i].getIndex();
    std::cout << " |  firstName: ";
    contacts[i].showFirstname();
    std::cout << " |  lastName: ";
    contacts[i].showLastName();
    std::cout << " |  nickName: ";
    contacts[i].showNickName();
    std::cout << std::endl;
    }
    char var2;
    std::cout << "Выберите, что вы хотите сделать?\n";
    std::cout << "1) Введите номер контакта для более подробной информации\n";
    std::cout << "2) Нажмите 9 для выхода\n";
    std::cin >> var2;
    int num = var2 - '0';
    if ((num >= 0) && (num < count2)) {
        std::cout << contacts[num];
        std::cout << std::endl;
        return;
    }
    else if (num == 9){
            start();
        }
    else
    {
        std::cerr << "\033[1;31mВыбран несуществующий вариант.\033[0m\n";
    return;
        }
    }

void PhoneBook::add() {
    if (count == SIZE)
        count = 0;
    contacts[count].setFirstName();
    contacts[count].setLastName();
    contacts[count].setNickName();
    contacts[count].setPhoneNumber();
    contacts[count].setDarknestSecret();
    contacts[count].setIndex(count);
    count++;
    if (count2 != 8)
        count2++;
}

void PhoneBook::start(){
    char var;
    std::cout << "Выберите, что вы хотите сделать?\n";
    std::cout << "1 - ADD\n";
    std::cout << "2 - SEARCH\n";
    std::cout << "3 - EXIT\n";
    std::cin >> var;
    if (std::cin.eof()) {
        std::cerr << "\033[1;31mМне кажется, вы пытаетесь меня задушить.\033[0m\n";
        exit(0);
    }
    std::cin.ignore();
    switch (var)
    {
        case '1': {
            add();
            break;
        }
        case '2': {
            search();
            break;
        }
        case '3':{
            std::exit(0);
            break;
        }
        default: {
            std::cerr << "\033[1;31mВыбран несуществующий вариант.\033[0m\n";
            return;
        }
    }
}

PhoneBook::PhoneBook() {
    count = 0;
    count2 = 0;
}
