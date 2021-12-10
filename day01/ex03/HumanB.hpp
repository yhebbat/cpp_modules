#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon *_weapon;
    public:
        HumanB(std::string test);
        std::string	getName(void) const;
		void		setName(std::string name);
        void setWeapon(Weapon &weapon);
        void attack(void);
        ~HumanB();
};



#endif