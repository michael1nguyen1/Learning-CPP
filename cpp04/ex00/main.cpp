#include "include/Animal.hpp"
#include "include/Cat.hpp"
// #include "include/Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* i = new Cat();

    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    meta->makeSound();
}