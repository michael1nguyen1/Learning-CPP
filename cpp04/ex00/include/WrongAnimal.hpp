#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal&);
        WrongAnimal& operator=(const WrongAnimal&);
        virtual ~WrongAnimal();
        virtual void makeSound() const;
        std::string getType() const;

    protected:
        std::string type;
};

#endif