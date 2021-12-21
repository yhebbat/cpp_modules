#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string _name;
    int         _hitpoints = 10;
    int         _energy_point = 10;
    int         _attack_damage = 0;
public:
    ClapTrap(void);
    ~ClapTrap();
    void	attack(std::string const & target);
    void	takeDamage(unsigned int amount);
    void	beRepaired(unsigned int amount);
    // int		SetName(std::strin)
};

ClapTrap::ClapTrap(void)
{
    std::cout << "constructor has been called" << std::endl;
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor has been called" << std::endl;
    return ;
}



#endif