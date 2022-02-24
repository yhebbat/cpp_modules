#include "Bureaucrat.hpp"
// #include "Form.hpp"

int main()
{
    Bureaucrat b("yassine", 149);
    Bureaucrat a("yassine", 3);

    try
    {
        a.increment();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        b.decrement();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << a;
    std::cout << b;
}