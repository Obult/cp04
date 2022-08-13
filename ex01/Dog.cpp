#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    _myBrain = new Brain();
    std::cout << "I am a Dog" << std::endl;
}

Dog::~Dog()
{
    delete _myBrain;
    std::cout << "I was a Dog" << std::endl;
}

Dog::Dog(const Dog& ref)
{
    *this = ref;
}

Dog&    Dog::operator=(const Dog& ref)
{
    type = ref.type;
    _myBrain = ref._myBrain;
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "barking \"Woof woof\"" << std::endl;
}
