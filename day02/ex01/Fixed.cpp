#include "Fixed.hpp"

Fixed::Fixed(void):_value(0)
{
    std::cout << "default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "destructor called" << std::endl;
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
    // this->setRawBits(val<<Fixed::bits);
    this->_value = (val<<Fixed::bits);
}

Fixed::Fixed( float const val)
{
	std::cout << "Float constructor called"<< std::endl;
	// this->setRawBits(roundf(val * (1 << Fixed::bits)));
    this->_value = roundf(val * (1<<Fixed::bits));
}

Fixed& Fixed::operator=(Fixed const & rhs)
{
    std::cout << "assignment operator called"<< std::endl;
    if (this != &rhs)
        this->_value = rhs._value;
    return (*this);
}

float Fixed::toFloat(void) const
{
    // return((float)getRawBits() / (float)(1<<Fixed::bits));
    return((float)this->_value / (float)(1<<Fixed::bits));
}

int Fixed::toInt(void) const
{
    //  return((int)getRawBits()>>Fixed::bits);
    return((int)this->_value>>Fixed::bits);
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return o;
}