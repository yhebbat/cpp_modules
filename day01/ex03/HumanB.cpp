#include "HumanB.hpp"

HumanB::HumanB(std::string test): _name(test)
{
    //this->_name = test;
}

std::string	HumanB::getName(void) const
{
	return (this->_name);
}

void		HumanB::setName(std::string name)
{
	this->_name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    if (this->_weapon)
        std::cout << this->_name << " attacks with his" << this->_weapon->getType() << std::endl;
}