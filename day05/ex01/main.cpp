#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("yassine", 1);
    Bureaucrat b("yassine", 149);

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

    std::cout << a.GetName() << " : "<< a.GetGrade() << std::endl; 
    std::cout << b.GetName() << " : "<< b.GetGrade() << std::endl; 
}