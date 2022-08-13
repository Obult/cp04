#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* d = new Dog();
    const Animal* c = new Cat();
    std::cout << d->getType() << " " << std::endl;
    std::cout << c->getType() << " " << std::endl;
    c->makeSound();
    d->makeSound();
    meta->makeSound();

    std::cout << std::endl;

    d->setIdea(0, "snappen mensen iets van die geluiden die ze naar elkaar maken?");
    std::cout << d->getIdea(0) << std::endl;

    Dog precopy;
    precopy.setIdea(0, "mijn eigen gedachte");
    const Animal* copy = new Dog(precopy);
    std::cout << copy->getIdea(0) << std::endl;

    try
    {
        std::cout << d->getIdea(200) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    delete meta;
    delete c;
    delete d;
}