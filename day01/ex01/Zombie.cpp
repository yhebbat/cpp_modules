#include "Zombie.hpp"

Zombie::Zombie(void)
{
    this->annonce();
}

Zombie::~Zombie()
{
    std::cout << this->get_name() << "Zombie destroyed" << std::endl;
}

void    Zombie::annonce()
{
    std::cout << this->_name << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
    this->annonce();
}

std::string Zombie::get_name(void) const
{
    return(this->_name);
}

void    Zombie::set_name(std::string name)
{
    this->_name = name;
    return ;
}
