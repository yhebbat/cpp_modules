#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(void);
		Weapon(std::string yes);
		std::string const &getType(void);
		void setType(std::string name);
		~Weapon();
};

#endif