#include "Form.hpp"

// Form::Form(): _execgrade(0), _signgrade(0), _signed(false)
// {
// }

Form::~Form()
{
}

Form::Form(std::string const name, int const sign, int const exec):_name(name), _signgrade(sign), _execgrade(exec)
{
	if (_signgrade > 150 || _execgrade > 150)
		throw Form::GradeTooLowException();
	else if (_signgrade < 1 || _execgrade < 1)
		throw Form::GradeTooHighException();
}

Form &		Form::operator=( Form const & rhs )
{
	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}

Form::Form( Form const & src ): _signgrade(src._signgrade),_execgrade(src._execgrade) 
{
    if (this != &src)
        *this = src;
}

std::string 	Form::getName() const
{
    return(this->_name);
}

bool			Form::getSignState() const
{
    return(this->_signed);
}

void			Form::setSignState(bool sign)
{
    this->_signed = sign;
}

int				Form::getSignGrade() const
{
	return (this->_signgrade);
}

int				Form::getExecutionGrade() const
{
	return(this->_execgrade);
}

Form&			Form::beSigned(Bureaucrat & bureau)
{	
	if (bureau.GetGrade() > this->_signgrade)
	{
		// bureau.signForm(*this);
		throw Form::GradeTooLowException();
	}
	else
		this->_signed = 1;
	return (*this);
}

std::ostream & operator<<( std::ostream & o, Form const & rhs)
{
    if (rhs.getSignState() == true)
        o << rhs.getName() << " exec grade: " << rhs.getExecutionGrade() << " signe grade: " << rhs.getSignGrade() << " signed";
    else
        o << rhs.getName() << " exec grade: " << rhs.getExecutionGrade() << " signe grade: " << rhs.getSignGrade() << " not signed";
    return o;
}