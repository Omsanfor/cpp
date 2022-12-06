//
// Created by Omelette Sanford on 10/19/22.
//

#ifndef EX01_PHONEBOOK_H
#define EX01_PHONEBOOK_H
#define SIZE 8
#include "Contact.h"

class PhoneBook {
private:
    Contact contacts[SIZE];
    int count;
    int count2;

public:
    void add();

    void search();

    PhoneBook();



    void start();
};



#endif //EX01_PHONEBOOK_H
