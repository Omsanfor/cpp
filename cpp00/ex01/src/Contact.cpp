//
// Created by Omelette Sanford on 10/19/22.
//

#include "../inc/Contact.h"

void Contact::setIndex(int index) {
    Contact::index = index;
}


int Contact::getIndex() const {
    return index;
}

const std::string &Contact::getFirstName() const {
    return firstName;
}

void Contact::setFirstName() {
    std::cout << "Введите имя\n";
    std::getline(std::cin, firstName);
    if (std::cin.eof()) {
        std::cerr << "\033[1;31mМне кажется, вы пытаетесь меня задушить.\033[0m\n";
        exit(0);
    }
    if (firstName.empty())
        setFirstName();
}
void Contact::showFirstname() {
    if (firstName.length() > 10){
        std::cout  << firstName.substr(0, 9) << ".";
    }
    else
        std::cout << std::setw(10) << firstName;
}

const std::string &Contact::getLastName() const {
    return lastName;
}

void Contact::setLastName() {
    std::cout << "Введите фамилию\n";
    std::getline(std::cin, lastName);
    if (std::cin.eof()) {
        std::cerr << "\033[1;31mPressed Ctrl-D..exit\033[0m\n";
        exit(0);
    }
    if (lastName.empty())
        setLastName();
}
void Contact::showLastName() {
    if (lastName.length() > 10){
        std::cout  << lastName.substr(0, 9) << ".";
    }
    else
        std::cout << std::setw(10) << lastName;
}

const std::string &Contact::getNickName() const {
    return nickName;
}

void Contact::setNickName() {
    std::cout << "Введите никнейм\n";
    std::getline(std::cin, nickName);
    if (std::cin.eof()) {
        std::cerr << "\033[1;31mPressed Ctrl-D..exit\033[0m\n";
        exit(0);
    }
    if (nickName.empty())
        setNickName();
}
void Contact::showNickName() {
    if (nickName.length() > 10){
        std::cout  << nickName.substr(0, 9) << ".";
    }
    else
        std::cout << std::setw(10) << nickName;
}

const std::string &Contact::getPhoneNumber() const {
    return phoneNumber;
}

void Contact::setPhoneNumber() {
    std::cout << "Введите номер телефона\n";
    std::getline(std::cin, phoneNumber);
    if (std::cin.eof()) {
        std::cerr << "\033[1;31mPressed Ctrl-D..exit\033[0m\n";
        exit(0);
    }
    if (phoneNumber.empty())
        setPhoneNumber();
}

const std::string &Contact::getDarknestSecret() const {
    return darknestSecret;
}

void Contact::setDarknestSecret() {
    std::cout << "Введите самую страшную тайну\n";
    std::getline(std::cin, darknestSecret);
    if (std::cin.eof()) {
        std::cerr << "\033[1;31mPressed Ctrl-D..exit\033[0m\n";
        exit(0);
    }
    if (darknestSecret.empty())
        setDarknestSecret();
}

std::ostream &operator<<(std::ostream &os, const Contact &contact) {
    os  << "firstName: " << contact.getFirstName() << " | lastName: " << contact.getLastName()
       << " | nickName: " << contact.getNickName() << " | phoneNumber: " << contact.getPhoneNumber()
    << " | darknestSecret: " << contact.getDarknestSecret() << std::endl;
    return os;
}
