#include "Karen.hpp"

Karen::Karen()
{
    std::cout << "constructor called"<< std::endl; 
}

void    Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."<< std::endl;
    std::cout << "I just love it!" << std::endl;
}

void    Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
    std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void    Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Karen::complain(std::string level)
{
	int r = 0;
    for (size_t i = 0; i < level.length(); i++)
        r += level[i];
	void (Karen::*fct[])(void) = 
	{
		&Karen::debug, &Karen::info, &Karen::warning, &Karen::error
	};
	switch (r)
	{
		case (359):
			(this->*fct[0])();//this->debug();
			break;
		case (300):
			(this->*fct[1])();//this->info();
			break;
		case (534):
			(this->*fct[2])();//this->warning();
			break;
		case (394):
			(this->*fct[3])();//this->error();
            break;
        default:
            std::cout << "Error: word not found" << std::endl;
			break;
	}
}

Karen::~Karen()
{
    std::cout << "destrutor called"<< std::endl;
}