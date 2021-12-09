#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon _weapon;
        std::string _name;

    public:
        HumanA(void);
        HumanA(std::string name, Weapon weapon);
        void attack(void);
        ~HumanA();
};

#endif