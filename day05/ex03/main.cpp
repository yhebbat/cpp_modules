#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern inter;
	Form* shrubberyForm = inter.Makeform("shrubbery creation", "Garden");
	Form* robotomyForm = inter.Makeform("robotomy request", "Well");
	Form* presidentialPardonForm = inter.Makeform("presidential pardon", "yass");
	// Form* robotomyForm = new RobotomyRequestForm("Well");
	// Form* presidentialPardonForm = new PresidentialPardonForm("Abmoula");
	Bureaucrat	bureaucrat1("qaid", 1);

	try
	{
		if (shrubberyForm)
			bureaucrat1.signForm(*shrubberyForm);
		bureaucrat1.signForm(*robotomyForm);
		bureaucrat1.signForm(*presidentialPardonForm);
		if (shrubberyForm)
			bureaucrat1.executeForm(*shrubberyForm);
		bureaucrat1.executeForm(*robotomyForm);
		bureaucrat1.executeForm(*presidentialPardonForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n";
	}
	
	
	// std::cout << bureaucrat1 << std::endl;
	// std::cout << *shrubberyForm << std::endl;
	// std::cout << *robotomyForm << std::endl;
	// std::cout << *presidentialPardonForm << std::endl;
	return 0;
}