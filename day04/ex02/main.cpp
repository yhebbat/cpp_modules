#include "Animal.hpp"

int main()
{
    int t = 0;
    Animal *ani[8];
    std::cout << "-------------Dogs----------------" << std::endl;
    while (t < 4)
    {
        ani[t] = new Dog();
        t++;
    }
    std::cout << "-------------Cats----------------" << std::endl;
    while (t < 8)
    {
        ani[t] = new Cat();
        t++;
    }
    std::cout << "-------------Delete----------------" << std::endl;
    t = 0;
    while (t < 8)
    {
        delete ani[t];
        t++;
    }
    std::cout << "------------------------------------" << std::endl;
    const Animal *j = new Dog();
    // const Animal *c = new Animal();
    const Animal *i = new Cat();
    
    delete j;//shouldnotcreatealeak
//    delete c;//shouldnotcreatealeak
    delete i;
}