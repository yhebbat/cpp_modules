#include "contact.hpp"

int main()
{
    std::string	command;
	Phonebook	book;	

	while (1)
	{
		command = "";
		if (command.compare("EXIT") && command.compare("ADD") && command.compare("SEARCH"))
		{
			std::cout << "what do you want? you can only ADD, SEARCH and EXIT: ";
			if (getline(std::cin, command) == 0)
				return (-1);
		}
		if (command.compare("ADD") == 0)
			book.add_contact();
		if (command.compare("SEARCH") == 0)
			book.search_contact();
		if (command.compare("EXIT") == 0)
			return (0);
	}
	return (0);
}
