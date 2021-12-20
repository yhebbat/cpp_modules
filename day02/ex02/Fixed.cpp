#include "Fixed.hpp"

/**------------CONSTRUCTOR-------------**/

Fixed::Fixed(void):_value(0)
{
    std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "copy constructor called"<< std::endl;
    if (this != &src)
        this->_value = src._value;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called"<< std::endl;
    this->_value = (val<<Fixed::bits);
}

Fixed::Fixed( float const val)
{
	std::cout << "Float constructor called"<< std::endl;
    this->_value = roundf(val * (1<<Fixed::bits));
}

/**------------DESTRUCTOR-------------**/

Fixed::~Fixed()
{
    std::cout << "destructor called" << std::endl;
}

/**------------CONVERTION-------------**/

float Fixed::toFloat(void) const
{
    return((float)this->_value / (float)(1<<Fixed::bits));
}

int Fixed::toInt(void) const
{
    return((int)this->_value>>Fixed::bits);
}

/**------------OPERATOR-------------**/

Fixed& Fixed::operator=(Fixed const & rhs)
{
    std::cout << "assignment operator called"<< std::endl;
    if (this != &rhs)
        this->_value = rhs._value;
    return (*this);
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return o;
}

bool Fixed::operator==(Fixed const& a)
{
    if (this->_value == a._value)
        return true;
    else
        return false;
}

bool Fixed::operator!=(Fixed const& a)
{
    if (*this == a)
        return false;
    else
        return true;
}