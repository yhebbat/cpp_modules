#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string _name;
        int         _hitpoints;
        int         _energy_points;
        int         _attack_damage;
    public:
        ClapTrap(void);//1
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & src);//2
        ClapTrap& operator=(ClapTrap const &rhs);//4
        ~ClapTrap();//3
        void			SetHitpoints(int val);
        int				GetHitpoints(void) const;
        void			SetEnergypoints(int val);
        int				GetEnergypoints(void) const;
        void			SetAttackdamage(int val);
        int				GetAttackdamage(void) const;
        void			attack(std::string const & target);
        void			takeDamage(unsigned int amount);
        void			beRepaired(unsigned int amount);
};

#endif