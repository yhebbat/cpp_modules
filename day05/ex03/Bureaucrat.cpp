#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return("grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return("grade is too Low");
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw()
{
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw()
{
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
}

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
    if (this != &src)
        *this = src;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & a)
{
    if (this != &a)
    {
        this->_name = a._name;
        this->_grade = a._grade;
    }
    return (*this);
}

std::string Bureaucrat::GetName() const
{
    return(this->_name);
}

int Bureaucrat::GetGrade() const
{
    return(this->_grade);
}

void        Bureaucrat::increment()
{
    if (this->_grade < 2)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
}

void        Bureaucrat::decrement()
{
    if (this->_grade > 149)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}

void	Bureaucrat::signForm(Form & form)
{
    if (form.gettarget().compare("nada"))
    {
        if (form.getSignGrade() >= this->_grade)
            std::cout << Bureaucrat::GetName() << " signs " << form.getName() << std::endl;
        else
            std::cout << Bureaucrat::GetName() << " can not sign because ";
        form.beSigned(*this);
    }
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.GetName() << " bureaucrat grade " << rhs.GetGrade();
    return o;
}

void	Bureaucrat::executeForm(Form const & form)
{
    if (form.gettarget().compare("nada"))
    {
        try
        {
            form.execute(*this);
            std::cout << this->GetName() << " executed " << form.getName() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << this->GetName() << " can't execute "  << e.what() << '\n';
        }
    }
}
