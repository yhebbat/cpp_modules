#include "ex01.hpp"

void	Contact::set_firstname(void)
{
	std::cout << "first name:" << std::endl;
	std::cin >> this->_first_name;
}

void	Contact::set_last_name(void)
{
	std::cout << "last name:" << std::endl;
	std::cin >> this->_last_name;
}

void	Contact::set_nickname(void)
{
	std::cout << "nickname:" << std::endl;
	std::cin >> this->_nickname;
}

void	Contact::set_phone_number(void)
{
	std::cout << "phone number:" << std::endl;
	std::cin >> this->_phone_number;
}

void	Contact::set_darkest_secret(void)
{
	std::cout << "darkest secret:" << std::endl;
	std::cin >> this->_darkest_secret;
}