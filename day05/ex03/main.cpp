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
	Bureaucrat	bureaucrat1("le maire", 1);

	try
	{
		// if (shrubberyForm)
			bureaucrat1.signForm(*shrubberyForm);
		// if (robotomyForm)
			bureaucrat1.signForm(*robotomyForm);
		// if (presidentialPardonForm)
			bureaucrat1.signForm(*presidentialPardonForm);
		// if (shrubberyForm)
			bureaucrat1.executeForm(*shrubberyForm);
		// if (robotomyForm)
			bureaucrat1.executeForm(*robotomyForm);
		// if (presidentialPardonForm)
			bureaucrat1.executeForm(*presidentialPardonForm);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n";
	}
	std::cout << bureaucrat1 << std::endl;
	// if (shrubberyForm)
		std::cout << *shrubberyForm << std::endl;
	// if (robotomyForm)
		std::cout << *robotomyForm << std::endl;
	// if (presidentialPardonForm)
		std::cout << *presidentialPardonForm ;//<< std::endl;
	return 0;
}