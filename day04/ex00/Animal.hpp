#ifndef ANIMAL_HPP
#define  ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string		type_;
	public:
		Animal();
		Animal(std::string type);
		Animal & operator=(Animal const & rhs);
        std::string getType(void) const;
        virtual void makeSound() const;
		virtual ~Animal();
		Animal(Animal const & src);
};


class Dog : public Animal
{
    public:
        Dog();
		Dog & operator=(Dog const & rhs);
        // std::string getType(void) const;
        void makeSound() const;
		~Dog();
		Dog(Dog const & src);
};

class Cat : public Animal
{
    public:
        Cat();
		Cat & operator=(Cat const & rhs);
        // std::string getType(void) const;
        void makeSound() const;
		~Cat();
		Cat(Cat const & src);
};

class WrongAnimal
{
    protected:
        std::string		type_;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal & operator=(WrongAnimal const & rhs);
        std::string getType(void) const;
        void makeSound() const;
		~WrongAnimal();
		WrongAnimal(WrongAnimal const & src);
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
		WrongCat & operator=(WrongCat const & rhs);
        void makeSound() const;
		~WrongCat();
		WrongCat(WrongCat const & src);
};
#endif