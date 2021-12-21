#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap 
{
    public:
        FragTrap(); 
        FragTrap(FragTrap const & src);
        FragTrap& operator=(FragTrap const &rhs);
        FragTrap(std::string name);      
        ~FragTrap();
        void highFivesGuys(void);
};

#endif