#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal Constructor called type is empty" << std::endl;
}

Animal::Animal(std::string type):type_(type)
{
	std::cout << "Animal Constructor called and type is not empty" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{
	if (this != &src)
		*this = src;
}

std::string Animal::getType() const
{
    return (this->type_);
}

void    Animal::makeSound() const
{
    std::cout << "every Animal have specific sound" << std::endl; 
}

Animal & Animal::operator=(Animal const & rhs)
{
	if (this != &rhs)
	{
		this->type_ = rhs.type_;
	}
	return (*this);
}

/*-------------------*DOG*-----------------*/


Dog::Dog(void)
{
	std::cout << "Dog Constructor called" << std::endl;
    this->type_ = "Dog";
}

void    Dog::makeSound() const
{
    std::cout << "the dog barks" << std::endl; 
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(Dog const & src)
{
	if (this != &src)
		*this = src;
}

Dog & Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
	{
		this->type_ = rhs.type_;
	}
	return (*this);
}

// std::string Dog::getType() const
// {
//     return (this->type_);
// }

/*-------------------*CAT*-----------------*/

Cat::Cat(void)
{
	std::cout << "Cat Constructor called" << std::endl;
    this->type_ = "Cat";
}

void    Cat::makeSound() const
{
    std::cout << "the cat meows" << std::endl; 
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(Cat const & src)
{
	if (this != &src)
		*this = src;
}

Cat & Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
	{
		this->type_ = rhs.type_;
	}
	return (*this);
}

// std::string Cat::getType() const
// {
//     return (this->type_);
// }

/*-------------------------*WrongAnimal*----------------------------*/

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal Constructor called type is empty" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):type_(type)
{
	std::cout << "WrongAnimal Constructor called and type is not empty" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	if (this != &src)
		*this = src;
}

std::string WrongAnimal::getType() const
{
    return (this->type_);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "every WrongAnimal have specific sound" << std::endl; 
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	if (this != &rhs)
	{
		this->type_ = rhs.type_;
	}
	return (*this);
}

/*-------------------------*WrongCat*----------------------------*/

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat Constructor called" << std::endl;
    this->type_ = "WrongCat";
}

void    WrongCat::makeSound() const
{
    std::cout << "the Wrongcat meows" << std::endl; 
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
	if (this != &src)
		*this = src;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	if (this != &rhs)
	{
		this->type_ = rhs.type_;
	}
	return (*this);
}

// std::string WrongCat::getType() const
// {
//     return (this->type_);
// }