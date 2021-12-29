#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name),_weapon(weapon)
{
}


void HumanA::attack()
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
}


std::string	HumanA::getName(void) const
{
	return (this->_name);
}

void		HumanA::setName(std::string name)
{
	this->_name = name;
}