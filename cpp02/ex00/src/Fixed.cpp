#include "../inc/Fixed.h"


Fixed::Fixed(int rawBits) {
    this->rawBits = rawBits;
}

Fixed::Fixed() {
    std::cout << "Default constructor called"<< std::endl;
    this->rawBits = 0;
}

Fixed::~Fixed() {
    std::cout << "Destructor called"<< std::endl;
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called"<< std::endl;
    this->rawBits = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called"<< std::endl;
    this->rawBits = other.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called"<< std::endl;
    return rawBits;
}

