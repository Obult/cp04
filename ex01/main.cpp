#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* d = new Dog();
    const Animal* c = new Cat();

    std::cout << d->getType() << std::endl;
    std::cout << c->getType() << std::endl;
    c->makeSound();
    d->makeSound();
    meta->makeSound();

    d->setIdea(0, "can humans comunicate with each other?");
    std::cout << d->getIdea(0) << std::endl;

    std::cout << std::endl;

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

    std::cout << std::endl;

    Dog precopy;
    precopy.setIdea(0, "an idea");
    const Animal* copy = new Dog(precopy);

    Dog extra = precopy;
    std::cout << extra.getIdea(0) << std::endl;
    std::cout << copy->getIdea(0) << std::endl;
    precopy.setIdea(0, "my idea");
    std::cout << copy->getIdea(0) << std::endl;
    std::cout << precopy.getIdea(0) << std::endl;

    std::cout << std::endl;

    delete copy;
    system("leaks tests");
    // on closing bracket two dogs will destruct, precopy and extra
}