#include "Animal.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout<< j->getType() << "" << std::endl;
    std::cout<< i->getType() << "" << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    const   WrongAnimal *l = new WrongCat();
    l->makeSound();
    // delete j;
    // delete i;
    // delete l;
}