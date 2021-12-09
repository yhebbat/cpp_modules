#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie(void);
		Zombie(std::string name);
		void annonce(void);
		std::string get_name(void) const;
		void set_name(std::string name);
		~Zombie();
};


Zombie* zombieHorde( int N, std::string name );
#endif