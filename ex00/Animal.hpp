#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
    public:
        Animal();
        ~Animal();
        Animal(const Animal& ref);
        Animal& operator=(const Animal& ref);
        void makeSound() const;
        std::string getType();
    protected:
        std::string type;
};


#endif