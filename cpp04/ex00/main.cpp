#include "include/Animal.hpp"
#include "include/WrongAnimal.hpp"
#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/WrongCat.hpp"

int main()
{
    std::cout << "\nTEST1\n";
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();

    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    const WrongAnimal* test = new WrongAnimal();
    const WrongAnimal* c = new WrongCat();
    std::cout << c->getType() << " " << std::endl;
    c->makeSound();
    test->makeSound();


    delete meta;
    delete i;
    delete j;
    delete test;
    delete c;

    std::cout << "\nTEST2\n";

    Animal a1 = Animal();
    Animal a2(a1);
    Animal a3 = a2;
    std::cout << "\ncats\n" << std::endl;
    Cat c1 = Cat();
    Cat c2 = Cat(c1);
    Cat c3 = c2;
    std::cout << "\n";

    std::cout << "a1 is: " << a1.getType() << std::endl;
    std::cout << "a2 is: " << a2.getType() << std::endl;
    std::cout << "a3 is: " << a3.getType() << std::endl;
    std::cout << "c1 is: " << c1.getType() << std::endl;
    std::cout << "c2 is: " << c2.getType() << std::endl;
    std::cout << "c3 is: " << c3.getType() << std::endl;

    std::cout << "\n";

}