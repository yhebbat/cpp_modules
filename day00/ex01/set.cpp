#include "contact.hpp"

void	Contact::set_firstname(void)
{
	std::cout << "first name: ";
	std::cin >> this->_first_name;
	// std::cout << std::endl;
}

void	Contact::set_last_name(void)
{
	std::cout << "last name: ";
	std::cin >> this->_last_name;
	// std::cout << std::endl;
}

void	Contact::set_nickname(void)
{
	std::cout << "nickname: ";
	std::cin >> this->_nickname;
	// std::cout << std::endl;
}

void	Contact::set_phone_number(void)
{
	std::cout << "phone number: ";
	std::cin >> this->_phone_number;
	// std::cout << std::endl;
}

void	Contact::set_darkest_secret(void)
{
	std::cout << "darkest secret: ";
	std::cin >> this->_darkest_secret;
	// std::cout << std::endl;
}