#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
    Cat();
    Cat(std::string);
    Cat(const Cat&);
    Cat& operator=(Cat&);
    ~Cat();
};

#endif