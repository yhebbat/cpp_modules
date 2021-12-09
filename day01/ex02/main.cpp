#include <string>
#include <iostream>
#include <iomanip>

int main()
{
    std::string mandila = "HI THIS IS BRAIN";
    std::string *stringPTR = &mandila;
    std::string &stringREF = mandila;

    std::cout << "*" << "---------------------**--------------------" << "*"<< std::endl;
    std::cout << "|" << std::setw(24) << "Address by string|| "   << std::setw(16) << &mandila          << "   |" << std::endl;
    std::cout << "|" << std::setw(24) << "Address by pointer|| "  << std::setw(16) << stringPTR          << "   |" << std::endl;
    std::cout << "|" << std::setw(24) << "Address by reference|| "<< std::setw(16) << &stringREF         << "   |" << std::endl;
    std::cout << "|" << "---------------------**--------------------" << "|" << std::endl;
    std::cout << "|" << std::setw(24) << "string|| "              << mandila   << "   |" << std::endl;
    std::cout << "|" << std::setw(24) << "string by pointer|| "   << *stringPTR         << "   |" << std::endl;
    std::cout << "|" << std::setw(24) << "string by reference|| " << stringREF          << "   |" << std::endl;
    std::cout << "*" << "---------------------**--------------------" << "*" << std::endl;

}