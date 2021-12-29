#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Form		form("kk", 150, 1);
	Form		form2("simo", 1, 1);
	Bureaucrat	bureaucrat("yassine", 1);
	Bureaucrat	bureaucrat2("hebbat", 149);

	try
	{
		form2.beSigned(bureaucrat2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		form1.beSigned(bureaucrat1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	// std::cout << bureaucrat1 << std::endl;
	// std::cout << bureaucrat2 << std::endl;
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	return 0;
}
