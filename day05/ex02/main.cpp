#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Form* shrubberyForm = new ShrubberyCreationForm("Garden");
	Form* robotomyForm = new RobotomyRequestForm("Well");
	Form* presidentialPardonForm = new PresidentialPardonForm("Abmoula");
	Bureaucrat	bureaucrat1("qaid", 1);

	try
	{
		bureaucrat1.signForm(*shrubberyForm);
		bureaucrat1.signForm(*robotomyForm);
		bureaucrat1.signForm(*presidentialPardonForm);
		bureaucrat1.executeForm(*shrubberyForm);
		bureaucrat1.executeForm(*robotomyForm);
		bureaucrat1.executeForm(*presidentialPardonForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	// std::cout << bureaucrat1 << std::endl;
	// std::cout << *shrubberyForm << std::endl;
	// std::cout << *robotomyForm << std::endl;
	// std::cout << *presidentialPardonForm << std::endl;
	return 0;
}

// #include "Bureaucrat.hpp"
// #include "Form.hpp"

// int main(void)
// {
// 	Form		form("kk", 150, 1);
// 	Form		form2("simo", 2, 1);
// 	Bureaucrat	bureaucrat("yassine", 1);
// 	Bureaucrat	bureaucrat2("hebbat", 3);

// 	try
// 	{
// 		bureaucrat2.signForm(form2);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
	
// 	try
// 	{
// 		bureaucrat.signForm(form);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
	
// 	std::cout << bureaucrat << std::endl;
// 	std::cout << bureaucrat2 << std::endl;
// 	std::cout << form << std::endl;
// 	std::cout << form2 << std::endl;
// 	return 0;
// }
