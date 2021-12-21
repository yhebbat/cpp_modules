#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap default constructor has been called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap constructor has been called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    if (this != &src)
    {
        this->_name = src._name;
        this->_hitpoints = src._hitpoints;
        this->_energy_points = src._energy_points;
        this->_attack_damage = src._attack_damage;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor has been called" << std::endl;
    return ;
}

void    ClapTrap::SetHitpoints(int val)
{
    this->_hitpoints = val;
}

int     ClapTrap::GetHitpoints(void) const
{
    return (this->_hitpoints);
}

void    ClapTrap::SetEnergypoints(int val)
{
    this->_energy_points = val;
}

int     ClapTrap::GetEnergypoints(void) const
{
    return (this->_energy_points);
}

void    ClapTrap::SetAttackdamage(int val)
{
    this->_attack_damage = val;
}

int     ClapTrap::GetAttackdamage(void) const
{
    return (this->_attack_damage);
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs)
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

void    ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << this->_name << " attack " 
	<<  target << " causing " <<  this->_attack_damage 
	<< " points of damage!" << std::endl;
	this->_energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " take damage " 
	<<  amount << std::endl;
	this->_attack_damage = amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " repaired " 
	<<  amount << " of energy " << std::endl;
	this->_hitpoints += amount;
	
}
