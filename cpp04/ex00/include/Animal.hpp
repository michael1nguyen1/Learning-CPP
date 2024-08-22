#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
    public:
        Animal();
        Animal(const Animal&);
        Animal& operator=(const Animal&);
        ~Animal();

    protected:
        std::string type;
};

#endif