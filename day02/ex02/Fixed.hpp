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
        Fixed& operator=(Fixed const & rhs);//3
        Fixed(const int val);//new
        Fixed(const float val);//new
        bool	operator==(Fixed const& a);
        bool	operator!=(Fixed const& a);
        bool	operator>=(Fixed const& a);
        bool	operator<=(Fixed const& a);
        bool	operator<(Fixed const& a);
        bool	operator>(Fixed const& a);
		Fixed	operator+(Fixed const& a);
        Fixed	operator-(Fixed const& a);
        Fixed	operator*(Fixed const& a);
        Fixed	operator/(Fixed const& a);
        float	toFloat(void) const;
        int		toInt(void) const;
        ~Fixed(); //4
};
std::ostream & operator<<( std::ostream & o, Fixed const & rhs);
#endif