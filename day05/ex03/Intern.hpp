#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

// class Form;
class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		Form*	Makeform(std::string form,std::string name);
		Form*	PresidentialPardon(std::string name);
		Form*	ShrubberyCreation(std::string name);
		Form*	RobotomyRequest(std::string name);
		Form*	nothing(std::string name);
		~Intern();

		Intern &		operator=( Intern const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* ********************************************************** INTERN_H */