#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;
class Bureaucrat
{
    private:
        std::string _name;
        int         _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const & src);
        Bureaucrat & operator=(Bureaucrat const & a);
        std::string GetName() const;
        int GetGrade() const;
        void        increment();
        void        decrement();
        void	signForm( Form & form );
        void	executeForm( Form const & form );
        ~Bureaucrat();

        class GradeTooHighException : public std::exception
        {
            private:
                
            public:
                GradeTooHighException() throw();
                virtual ~GradeTooHighException() throw();
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            private:
                
            public:
                GradeTooLowException() throw();
                virtual ~GradeTooLowException() throw();
                virtual const char* what() const throw();
        };
};
std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs);
#endif