#include "contact.hpp"

std::string Contact::get_firstname(void) const
{
	std::cout << "first name:";
	return (this->_first_name);
}

std::string Contact::get_last_name(void) const
{
	std::cout << "last name:";
	return (this->_last_name);
}

std::string Contact::get_nickname(void) const
{
	std::cout << "nickname:";
	return (this->_nickname);
}

std::string Contact::get_darkest_secret(void) const
{
	std::cout << "darkest secret:";
	return (this->_darkest_secret);
}

std::string Contact::get_phone_number(void) const
{
	std::cout << "phone number:";
	return (this->_phone_number);
}