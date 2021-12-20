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
    std::cout << "copy constructor called" << std::endl;
    if (this != &src)
        this->_value = src._value;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(val * (1 << Fixed::bits));
}

Fixed::Fixed( float const val)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(val * (1 << Fixed::bits)));
}

Fixed& Fixed::operator=(Fixed const & rhs)
{
    std::cout << "assignment operator called" << std::endl;
    if (this != &rhs)
        this->setRawBits(rhs._value);
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

float Fixed::toFloat(void) const
{
    return((float)getRawBits() / (float)(1<<Fixed::bits));
}

int Fixed::toInt(void) const
{
    return((int)getRawBits() / (int)(1<<Fixed::bits));
}


std::ostream & operator<<( std::ostream & o, Fixed const & rhs)
{
    o << rhs.getRawBits();
    return o;
}