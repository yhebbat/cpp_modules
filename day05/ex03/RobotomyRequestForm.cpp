#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("RobotomyRequestForm", target, 72, 45)
{
}



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		// this->_value = rhs.getValue();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	if (i.getSignState())
		o << i.getName() << " is signed";
	else
		o << i.getName() << " is not signed";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::execute (Bureaucrat const & executor) const
{
	if (executor.GetGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	else if (this->getSignState() == false)
		throw Form::NotSigned();
	else
	{
		if ((rand() % 100) >= 50)
			std::cout << this->gettarget() << "a bien été robotomizée" << std::endl;
		else
			std::cout << this->gettarget() << "n'a pas été robotomizée" << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */