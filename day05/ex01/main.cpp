#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Form		form("kk", 150, 1);
	Form		form2("simo", 2, 1);
	Bureaucrat	bureaucrat("yassine", 1);
	Bureaucrat	bureaucrat2("hebbat", 3);

	try
	{
		bureaucrat2.signForm(form2);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		bureaucrat.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << bureaucrat << std::endl;
	std::cout << bureaucrat2 << std::endl;
	std::cout << form << std::endl;
	std::cout << form2 << std::endl;
	return 0;
}
