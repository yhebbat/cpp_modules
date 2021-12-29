#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const _name;
        int const   _signgrade;
        int const   _execgrade;
        bool        _signed;
    public:
        // Form();
        Form(std::string const name, int const sign, int const exec);
        ~Form();
        Form &		operator=( Form const & rhs );
        Form( Form const & src );
		std::string 	getName() const;
		bool			getSignState() const;
		void			setSignState(bool sign);
		int				getSignGrade() const;
		int 			getExecutionGrade() const;
        Form&			beSigned(Bureaucrat & bureau);
        class GradeTooHighException : public std::exception
        {
            public:
                GradeTooHighException() throw(){}
                virtual ~GradeTooHighException() throw(){}
                virtual const char* what() const throw(){return ("grade too high!");}
        };
        class GradeTooLowException : public std::exception
        {       
            public:
                GradeTooLowException() throw(){}
                virtual ~GradeTooLowException() throw(){}
                virtual const char* what() const throw(){return ("grade too low!");}
        };
};
std::ostream & operator<<( std::ostream & o, Form const & rhs);
#endif