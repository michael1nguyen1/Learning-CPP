#include "include/Cat.hpp"
#include "include/Dog.hpp"

int main() 
{

    // /******TEST1*******/
    std::cout << "Test 1\n" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat(); 
    
    delete i;
    delete j;


    /******TEST2*******/
    std::cout << "\nTest 2\n" << std::endl;
    const int animalCount = 6;
    Animal* animals[animalCount];

    for (int i = 0; i < animalCount / 2; ++i)
        animals[i] = new Dog();
    for (int i = animalCount / 2; i < animalCount; ++i)
        animals[i] = new Cat();
    for (int i = 0; i < animalCount; ++i)
    {
        std::cout << "animal " << i << std::endl;
        animals[i]->makeSound();
    }
    delete animals[0];
    animals[0] = new Cat();
    std::cout << "animal 0" << std::endl;
    animals[0]->makeSound();
    for (int i = 0; i < animalCount; ++i)
        delete animals[i];


    /******TEST3*******/
    std::cout << "\nTest 3\n" << std::endl;
    Animal *a = new Cat();
    Animal *b(a);
    std::cout << "animal b" << std::endl;
    b->makeSound();

    delete b;
    }
