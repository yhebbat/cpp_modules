#include "ClapTrap.hpp"

int main()
{
    ClapTrap t("yassine");

    t.attack("karim");
    t.takeDamage(3);
    t.attack("karim");
    t.beRepaired(2);
}