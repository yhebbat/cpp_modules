#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon &_weapon;

    public:
        HumanA(std::string name, Weapon &weapon);
        void attack(void);
        ~HumanA();
        std::string	getName(void) const;
        void	    setName(std::string name);

};

#endif