#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl;

    j->setIdea(0, "snappen mensen iets van die geluiden die ze naar elkaar maken?");
    std::cout << j->getIdea(0) << std::endl;
    try
    {
        std::cout << j->getIdea(200) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    

    delete meta;
    delete i;
    delete j;
}