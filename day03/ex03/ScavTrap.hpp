#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap(void);//1
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & src);//2
        ScavTrap& operator=(ScavTrap const &rhs);//3
        ~ScavTrap();//4
        void guardGate();
};

#endif