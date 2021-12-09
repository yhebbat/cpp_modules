#include "Zombie.hpp"

int main()
{
    Zombie *test;

    test = zombieHorde(10, "yassine");
    int i = 0;
    while (i < 10)
    {
        test[i].annonce();
        i++;
    }
    delete [] test;
}