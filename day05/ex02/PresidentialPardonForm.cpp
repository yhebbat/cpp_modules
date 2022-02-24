#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("PresidentialPardonForm",target,25,5)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		// this->_target = rhs.gettarget();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	if (i.getSignState() == true)
		o << i.getName() + " at " + i.gettarget() + "needs Grade: " << i.getSignGrade() << " to be signed and Grade: " << i.getExecutionGrade() << " to be executed. Form is signed" << std::endl;
	else
		o << i.getName() + " at " + i.gettarget() + "needs Grade: " << i.getSignGrade() << " to be signed and Grade: " << i.getExecutionGrade() << " to be executed. Form is not signed" << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void PresidentialPardonForm::execute (Bureaucrat const & executor) const
{
	if (executor.GetGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	else if (this->getSignState() == false)
		throw Form::NotSigned();
	else
	{
		std::cout << this->gettarget() << " a été pardonnée par Zafod Beeblebrox" << std::endl;
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */