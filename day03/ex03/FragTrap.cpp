#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap default destructor has been called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
    if (this != &src)
        *this = src;
}

FragTrap& FragTrap::operator=(FragTrap const &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitpoints = rhs._hitpoints;
        this->_energy_points = rhs._energy_points;
        this->_attack_damage = rhs._attack_damage;
    }
    return (*this);
}

FragTrap::FragTrap(std::string name)
{
    this->_name = name;
    this->_hitpoints = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "FragTrap constructor has been called" << std::endl;
    return ;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "Can i have a high Five :)" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap default destructor has been called" << std::endl;
}