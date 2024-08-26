#include "include/Cat.hpp"
#include "include/Dog.hpp"

int main()
{
    std::cout << "\nTEST1\n";
    // const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();

    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();

    delete i;
    delete j;

    std::cout << "\nTEST2\n";

    std::cout << "\ncats\n" << std::endl;
    Cat c1 = Cat();
    Cat c2 = Cat(c1);
    Cat c3 = c2;
    std::cout << "\n";

    std::cout << "c1 is: " << c1.getType() << std::endl;
    std::cout << "c2 is: " << c2.getType() << std::endl;
    std::cout << "c3 is: " << c3.getType() << std::endl;
    c1.makeSound();
    c2.makeSound();
    c3.makeSound();

    std::cout << "\n";

}