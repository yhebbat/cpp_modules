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

void    Phonebook::search_contact(void) const
{
	if (this->i < 1 || this->i > 8)
		std::cout << "we have only 8 contacts" << std::endl;
	else
	{
		std::cout << this->_contact[this->i - 1].get_firstname() << std::endl;
		std::cout << this->_contact[this->i - 1].get_last_name() << std::endl;
		std::cout << this->_contact[this->i - 1].get_nickname() << std::endl;
		std::cout << this->_contact[this->i - 1].get_phone_number() << std::endl;
		std::cout << this->_contact[this->i - 1].get_darkest_secret() << std::endl;
	}
}