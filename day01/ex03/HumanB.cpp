#include "HumanB.hpp"

HumanB::HumanB(void)
{
}

HumanB::HumanB(std::string test)
{
    this->_name = test;
}

void HumanB::setWeapon(Weapon weapon)
{
    this->_weapon = weapon;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    std::cout << this->_name << " attacks with his" << this->_weapon.getType() << std::endl;
}