#include "contact.hpp"

void	Phonebook::add_contact(void)
{
	static int i = 0;

	if (i < 8)
	{
		this->_contact[i].set_firstname();
		this->_contact[i].set_last_name();
		this->_contact[i].set_nickname();
		this->_contact[i].set_phone_number();
		this->_contact[i].set_darkest_secret();
		i++;
	}
	else
		std::cout << "You have already added 8 contact" << std::endl; 
}

#include <iomanip>

void    Phonebook::search_contact(void) const
{
	int i;
	std::cout << "*----------*----------*----------*----------*" << std::endl;
	std::cout << "|" << std::setw(10) << "index" << "|" 
			 << std::setw(10) << "firstname" << "|"
			 << std::setw(10) << "lastname" << "|"
			 << std::setw(10) << "nickname" << "|" << std::endl;
	std::cout << "*----------*----------*----------*----------*" << std::endl;
	std::cout << "enter id:";
	std::cin >> i;
	std::cout << std::endl;
	if (i < 1 || i > 8)
		std::cout << "we have only 8 contacts" << std::endl;
	else
	{
		std::cout << this->_contact[i - 1].get_firstname() << std::endl;
		std::cout << this->_contact[i - 1].get_last_name() << std::endl;
		std::cout << this->_contact[i - 1].get_nickname() << std::endl;
		std::cout << this->_contact[i - 1].get_phone_number() << std::endl;
		std::cout << this->_contact[i - 1].get_darkest_secret() << std::endl;
	}
}