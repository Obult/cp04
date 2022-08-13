#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    _myBrain = new Brain();
    std::cout << "I am a Cat" << std::endl;
}

Cat::~Cat()
{
    delete _myBrain;
    std::cout << "I was a Cat" << std::endl;
}

Cat::Cat(const Cat& ref)
{
    *this = ref;
}

Cat& Cat::operator=(const Cat& ref)
{
    type = ref.type;
    _myBrain = ref._myBrain;
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << "Miaaauw" << std::endl;
}