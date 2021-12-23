#include "contact.hpp"

int	Phonebook::_index = 0;


void		Phonebook::inc_index(void)
{
	Phonebook::_index++;
}

int	Phonebook::get_index(void) const
{
	return(Phonebook::_index);
}

void	Phonebook::add_contact(void)
{
	if (Phonebook::get_index() < 8)
	{
		this->_contact[Phonebook::get_index()].set_firstname();
		this->_contact[Phonebook::get_index()].set_last_name();
		this->_contact[Phonebook::get_index()].set_nickname();
		this->_contact[Phonebook::get_index()].set_phone_number();
		this->_contact[Phonebook::get_index()].set_darkest_secret();
		if (!(this->_contact[Phonebook::get_index()].get_firstname().empty() && this->_contact[Phonebook::get_index()].get_last_name().empty()
			&& this->_contact[Phonebook::get_index()].get_nickname().empty() && this->_contact[Phonebook::get_index()].get_phone_number().empty()
			&& this->_contact[Phonebook::get_index()].get_darkest_secret().empty()))
			Phonebook::inc_index();
	}
	else
		std::cout << "You have already added 8 contact" << std::endl;
}

std::string	Contact::print_table(int k) const
{
	std::string hh;
	if (k == 1)
	{
		hh.assign(this->get_firstname());
		if (hh.length() > 9)
		{
			hh.erase(hh.begin()+9, hh.end());
			hh.append(".");
		}
		return (hh);
	}
	else if (k == 2)
	{
		hh.assign(this->get_last_name());
		if (hh.length() > 9)
		{
			hh.erase(hh.begin()+9, hh.end());
			hh.append(".");
		}
		return (hh);
	}
	else
	{
		hh.assign(this->get_nickname());
		if (hh.length() > 9)
		{
			hh.erase(hh.begin()+9, hh.end());
			hh.append(".");
		}
		return (hh);
	}
}

void    Phonebook::search_contact(void) const
{
	int i;
	std::string id;

	i = 0;
	std::cout << "*----------*----------*----------*----------*" << std::endl;
	std::cout << "|" << std::setw(10) << "identifier" << "|" 
			 << std::setw(10) << "firstname" << "|"
			 << std::setw(10) << "lastname" << "|"
			 << std::setw(10) << "nickname" << "|" << std::endl;
	std::cout << "*----------*----------*----------*----------*" << std::endl;
	if (Phonebook::get_index() == 0)
	{
		std::cout << "list of contacts is empty" << std::endl;
	}
	else
	{
		while (i < Phonebook::get_index())
		{
			std::cout << "|" << std::setw(10) << i + 1 << "|";
			std::cout << std::setw(10) << this->_contact[i].print_table(1) << "|";
			std::cout << std::setw(10) << this->_contact[i].print_table(2) << "|";
			std::cout << std::setw(10) << this->_contact[i].print_table(3) << "|" << std::endl;
			i++;
		}
		i = 0;
		std::cout << "enter id:";
		if (std::getline(std::cin, id) == 0)
			exit(-1);
		std::cout << std::endl;
		if (id.length() > 1 || (id.compare("1") && id.compare("2") && id.compare("3") && id.compare("4") && id.compare("5") && id.compare("6") && id.compare("7") && id.compare("8")))
			std::cout << "!!!!***INVALID ID***!!!!" << std::endl;
		else
		{
			i = std::stoi(id);
			if ((i - 1) < Phonebook::get_index())
			{
				std::cout << "first name: ";
				std::cout << this->_contact[i - 1].get_firstname() << std::endl;
				std::cout << "last name: ";
				std::cout << this->_contact[i - 1].get_last_name() << std::endl;
				std::cout << "nickname: ";
				std::cout << this->_contact[i - 1].get_nickname() << std::endl;
				std::cout << "phone number: ";
				std::cout << this->_contact[i - 1].get_phone_number() << std::endl;
				std::cout << "darkest secret: ";
				std::cout << this->_contact[i - 1].get_darkest_secret() << std::endl;
			}
			else
				std::cout << "!!!**WE HAVE ONLY " << Phonebook::get_index() << " CONTACTS**!!!" << std::endl;
		}
	}
}