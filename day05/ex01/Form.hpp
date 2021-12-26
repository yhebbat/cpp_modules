#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    private:
        std::string const _name;
        bool        _signed;
        int const   _signgrade;
        int const   _execgrade;
    public:
        Form();
        Form(std::string const name, int const sign, int const exec);
        ~Form();
        Form( Form const & src );
        Form &		operator=( Form const & rhs );
		std::string 	getName() const;
		bool			getSignState() const;
		void			setSignState();
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

// Form::Form()
// {
// }

// Form::~Form()
// {

// }


#endif