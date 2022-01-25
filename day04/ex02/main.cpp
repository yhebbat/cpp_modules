#include "Animal.hpp"

int main()
{
    const Animal *j = new Dog();
    const Animal *c = new Animal();
    const Animal *i = new Cat();
    
    delete j;//shouldnotcreatealeak
    delete c;//shouldnotcreatealeak
    delete i;
}