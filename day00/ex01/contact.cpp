#include "contact.hpp"

int main()
{
    std::string	command;
	Phonebook	book;	

	while (1)
	{
		while (command.compare("EXIT") && command.compare("ADD") && command.compare("SEARCH"))
		{
			std::cout << "what do you want? you can only ADD, SEARCH and EXIT: ";
			std::cin >> command;
			std::cout << std::endl;
		}
		if (command.compare("ADD") == 0)
			book.add_contact();
		if (command.compare("SEARCH") == 0)
		{
			std::cout << "enter id:";
			std::cin >> book.i;
			std::cout << std::endl;
			book.search_contact();
		}
		if (command.compare("EXIT") == 0)
			return (0);
		command = "";
	}
	return (0);
}
