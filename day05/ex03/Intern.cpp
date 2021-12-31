#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	if ( this != &rhs )
	{
		// this->_value = rhs.getValue();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	o << "address of intern" << &i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Form*	Intern::Makeform(std::string form,std::string name)
{
	size_t i;

	std::string names[] = {"robotomy request","shrubbery creation","presidential pardon"};
	Form* (Intern::*fct[])(std::string) = 
	{
		&Intern::RobotomyRequest, &Intern::ShrubberyCreation, &Intern::PresidentialPardon, &Intern::nothing
	};
	for (i = 0; i < 3; i++)
	{
		if (names[i] == form)
			break ;
	}
	if (i < 3)
		std::cout << "Intern create " << names[i] << " form" << std::endl;
	return((this->*fct[i])(name));
}

Form*	Intern::PresidentialPardon(std::string name)
{
	Form *l = new PresidentialPardonForm(name);
	return(l);
}

Form*	Intern::ShrubberyCreation(std::string name)
{
	Form *l = new ShrubberyCreationForm(name);
	return(l);
}

Form*	Intern::RobotomyRequest(std::string name)
{
	Form *l = new RobotomyRequestForm(name);
	return(l);	
}

Form*	Intern::nothing(std::string name)
{
	(void)name;
	return(NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */