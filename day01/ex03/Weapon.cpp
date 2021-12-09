#include "Weapon.hpp"

std::string const &Weapon::getType(void)
{
    std::string &ret = this->_type;
    return (ret);
}

void Weapon::setType(std::string name)
{
    this->_type = name;
}

Weapon::Weapon(std::string yes)
{
	this->setType(yes);
}

Weapon::Weapon(void)
{
}

Weapon::~Weapon()
{
}