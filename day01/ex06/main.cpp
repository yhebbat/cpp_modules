#include "Karen.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: arguments" << std::endl;
        return (EXIT_FAILURE);
    }
    Karen test;
    // test.complain("DEBUG");
    test.complain(av[1]);
    // test.complain("WARNING");
    // test.complain("ERROR");
}