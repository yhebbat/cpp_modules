#include "Base.hpp"

Base * generate(void)
{
    srand( time( NULL ) );
    int i = rand() % 3;
    if (i == 0)
        return new A;
    else if (i == 1)
        return new B;
    else
        return new C;
}

void identify(Base * p)
{
    if (dynamic_cast<A*>(p) != nullptr)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p) != nullptr)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p) != nullptr)
        std::cout << "C" << std::endl;
    else
        std::cout << "Error cast" << std::endl;
}

void identify( Base & p)
{
    try
    {
        A & a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error cast:" << e.what() << '\n';
    }
    try
    {
        B & b = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        (void)b;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error cast:" << e.what() << '\n';
    }
    try
    {
        C & c = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        (void)c;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error cast:" << e.what() << '\n';
    }   
}

int main()
{
    Base *p = generate();
    std::cout << "identify by pointer" << std::endl;
    identify(p);
    std::cout << "identify by reference" << std::endl;
    identify(*p);
}