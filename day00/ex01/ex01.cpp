#include "ex01.hpp"

int main()
{
    std::string	command;
	Contact 	good[8];
	int		i;

	// std::cout << command /*<< "what do you want? you can only ADD, SEARCH and EXIT"*/ << std::endl;
	// std::cin >> command;
	while (1)
	{
		i = 0;
		// while (i < 8)
		// {
			while (command != "EXIT" && command != "ADD" && command != "SEARCH")
			{
				std::cout << "what do you want? you can only ADD, SEARCH and EXIT" << std::endl;
				std::cin >> command;
			}
			if (command == "ADD")
			{
				good[i].set_firstname();
				good[i].set_last_name();
				good[i].set_nickname();
				good[i].set_phone_number();
				good[i].set_darkest_secret();
			}
			if (command == "SEARCH")
			{
				std::cout << "id :" << i << std::endl;
				std::cout << good[i].get_firstname()  << std::endl;
				std::cout << good[i].get_last_name()  << std::endl;
				std::cout << good[i].get_nickname()  << std::endl;
				std::cout << good[i].get_phone_number()  << std::endl;
				//std::cout << good[i].get_darkest_secret()  << std::endl;
			}
			if (command == "EXIT")
				return (0);
			command = "";
		// 	i++;
		// }
	}
	// while (command != "EXIT" && command != "ADD" && command != "SEARCH")
	// {
	// 	std::cout << "what do you want? you can only ADD, SEARCH and EXIT" << std::endl;
	// 	std::cin >> command;
	// }
	// if (command == "ADD")
	// {
	// 	good.set_firstname();
	// 	good.set_last_name();
	// 	good.set_nickname();
	// 	good.set_phone_number();
	// 	good.set_darkest_secret();
	// //	std::cout << good.get_firstname() << std::endl;
	// }
	// if (command == "SEARCH")
	// {

	// }
	// if (command == "EXIT")
	// 	return (0);
	return (0);
}
