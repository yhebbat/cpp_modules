#include "HumanA.hpp"

HumanA::HumanA(void)
{
}

HumanA::HumanA(std::string name, Weapon weapon) : _name(name)
{
    this->_weapon = weapon;
}

void HumanA::attack()
{
    std::cout << this->_name << " attacks with his" << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
}
