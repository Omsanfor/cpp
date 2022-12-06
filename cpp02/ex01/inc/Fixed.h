#ifndef EX01_FIXED_H
#define EX01_FIXED_H

#include <iostream>
#include <cmath>
class Fixed {
private:
    int rawBits;
    const static int bits = 8;

public:
    /*Constructors and operators*/
    Fixed();
    Fixed(const int v_int);
    Fixed(const float v_float);
    Fixed(const Fixed &other);

    /*Operators*/
    Fixed & operator = (const Fixed &other);

    /*Destructors*/
    ~Fixed();

    /*Set*/
    void setRawBits(const int rawBits);

    /*Get*/
    int getRawBits() const;

    /*Subject*/
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream& operator<<(std::ostream &ostream, const Fixed &fixed);

#endif //EX01_FIXED_H
