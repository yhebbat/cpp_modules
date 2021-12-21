#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap default destructor has been called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
    if (this != &src)
        *this = src;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs)
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

ScavTrap::ScavTrap(std::string name)
{
    this->_name = name;
    this->_hitpoints = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "ScavTrap constructor has been called" << std::endl;
    return ;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap default destructor has been called" << std::endl;
}