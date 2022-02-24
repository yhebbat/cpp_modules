#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    protected:
        std::string const _name;
        std::string const _target;
        int const   _signgrade;
        int const   _execgrade;
        bool        _signed;
    public:
        // Form();
        Form(std::string const name, std::string target, int const signgrade, int const execgrade);
        ~Form();
        Form &		operator=( Form const & rhs );
        Form( Form const & src );
		std::string 	getName() const;
        std::string     gettarget() const;
		bool			getSignState() const;
		void			setSignState(bool sign);
		int				getSignGrade() const;
		int 			getExecutionGrade() const;
        Form&			beSigned(Bureaucrat & bureau);
        virtual void execute (Bureaucrat const & executor) const = 0;
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
        class NotSigned : public std::exception
        {       
            public:
                NotSigned() throw(){}
                virtual ~NotSigned() throw(){}
                virtual const char* what() const throw(){return ("not signed");}
        };
};
std::ostream & operator<<( std::ostream & o, Form const & rhs);
#endif