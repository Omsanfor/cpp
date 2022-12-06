//
// Created by Omelette Sanford on 10/19/22.
//

#ifndef EX01_CONTACT_H
#define EX01_CONTACT_H
#include <iostream>
#include <istream>
#include <iomanip>

class Contact {
private:
    int index;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
public:
    int getIndex() const;

private:
    std::string darknestSecret;
public:

    const std::string &getFirstName() const;

    void setFirstName();

    void showFirstname();

    const std::string &getLastName() const;

    void setLastName();

    void showLastName();

    const std::string &getNickName() const;

    void setNickName();

    void showNickName();

    const std::string &getPhoneNumber() const;

    void setPhoneNumber();

    const std::string &getDarknestSecret() const;

    void setDarknestSecret();

    void setIndex(int index);


};
std::ostream &operator<<(std::ostream &os, const Contact &contact);

#endif //EX01_CONTACT_H
