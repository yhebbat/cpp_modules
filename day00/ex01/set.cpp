#include "contact.hpp"

void	Contact::set_firstname(void)
{
	std::cout << "first name: ";
	//std::getline(std::cin, this->_first_name);
	if (getline(std::cin, this->_first_name) == 0)
		exit (-1);
	// std::cout << std::endl;
}

void	Contact::set_last_name(void)
{
	std::cout << "last name: ";
	if (std::getline(std::cin, this->_last_name) ==0)
		exit(-1);
	// std::cout << std::endl;
}

void	Contact::set_nickname(void)
{
	std::cout << "nickname: ";
	if (std::getline(std::cin, this->_nickname) == 0)
		exit(-1);
	// std::cout << std::endl;
}

void	Contact::set_phone_number(void)
{
	std::cout << "phone number: ";
	if (std::getline(std::cin, this->_phone_number) == 0)
		exit(-1);
	// std::cout << std::endl;
}

void	Contact::set_darkest_secret(void)
{
	std::cout << "darkest secret: ";
	if (std::getline(std::cin, this->_darkest_secret) == 0)
		exit(-1);
	// std::cout << std::endl;
}