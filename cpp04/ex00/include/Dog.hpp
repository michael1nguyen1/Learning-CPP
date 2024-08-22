#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include "Animal.hpp"


class Dog : public Animal
{
    Dog();
    Dog(std::string);
    Dog(const Dog&);
    Dog& operator=(Dog&);
    ~Dog();
};

#endif