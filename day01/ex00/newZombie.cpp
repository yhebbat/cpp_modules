#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie  *zombie = new Zombie(name);
    // (*zombie).set_name(name);
    // zombie->annonce();
    return (zombie);
}