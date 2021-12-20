#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
class Fixed
{
    private:    
        int _value;
        static const int bits = 8;
    public:
        Fixed(void); //1
        Fixed(Fixed const & src); //2
        Fixed& operator=(Fixed const & rhs);//3 operator=
        int getRawBits(void) const;
        void setRawBits(int const raw);
        ~Fixed(); //4
};

#endif