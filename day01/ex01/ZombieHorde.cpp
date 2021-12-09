#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombie = new Zombie[N];
    int i;

    i = 0;
    while (i < N)
    {
        zombie[i].set_name(name);
        i++;
    }
	return (zombie);
}