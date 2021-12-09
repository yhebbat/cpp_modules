#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon _weapon;
        std::string _name;
    public:
        HumanB(void);
        HumanB(std::string test);
        void setWeapon(Weapon weapon);
        void attack(void);
        ~HumanB();
};



#endif