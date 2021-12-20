#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>
class Fixed
{
    private:
        int _value;
        static const int bits = 8;
    public:
        Fixed(void); //1
        Fixed(Fixed const & src); //2
        Fixed(const int val);//new
        Fixed(const float val);//new
        float toFloat(void) const;
        int toInt(void) const;
        Fixed& operator=(Fixed const & rhs);//3 operator=
        int getRawBits(void) const;
        void setRawBits(int const raw);
        ~Fixed(); //4
};
std::ostream & operator<<( std::ostream & o, Fixed const & rhs);
#endif