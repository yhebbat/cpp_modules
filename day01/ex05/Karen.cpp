#include "Karen.hpp"

Karen::Karen()
{
    std::cout << "constructor called"<< std::endl; 
}

void    Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::info(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::error(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::complain(std::string level)
{
	int r = level[0];

	switch (r)
	{
		case ('D'):
			this->debug();
			break ;
		case ('E'):
			this->error();
			break ;
		case ('W'):
			this->warning();
			break ;
		case ('I'):
			this->info();
			break ;
	}
}

Karen::~Karen()
{
    std::cout << "destrutor called"<< std::endl;
}