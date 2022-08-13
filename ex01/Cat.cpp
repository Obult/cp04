#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "I am a Cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "I was a Cat" << std::endl;
}

Cat::Cat(const Cat& ref)
{
    *this = ref;
}

Cat& Cat::operator=(const Cat& ref)
{
    type = ref.type;
    _myBrain = ref._myBrain;    // this needs to be tested if a second animal uses the same brain
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << "Miaaauw" << std::endl;
}