#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

// int main()
// {
// 	std::cout << "\nTEST1\n" << std::endl;

// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;

// 	std::cout << "\nTEST2\n" << std::endl;

// 	Character A = Character("red");
// 	Character B = Character("blue");
// 	IMateriaSource *src1 = new MateriaSource();
// 	AMateria *tmp1;
// 	for (int i = 0; i < 3; i++)
// 	{
// 		tmp1 = new Ice();
// 		src1->learnMateria(tmp1);
// 		A.equip(src1->createMateria("ice"));
// 		tmp1 = new Cure();
// 		src1->learnMateria(tmp1);
// 		A.equip(src1->createMateria("cure"));
// 	}
// 	for (int i = 0; i < 4; i++)
// 		A.use(i, B);
// 	A.unequip(3);
// 	A.use(3, B);
// 	delete src1;
// }

// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
    
//     ICharacter* me = new Character("me");
    
//     AMateria* tmp;int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
    
//     ICharacter* me = new Character("me");
    
//     AMateria* tmp;
//     tmp = src->createMateria("ice");int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
    
//     ICharacter* boss = new Character("Boss");
//     boss->equip(src->createMateria("ice"));
//     std::cout << "materia equipped!\n";
//     boss->equip(src->createMateria("ice"));
//     std::cout << "materia equipped!\n";
//     boss->equip(src->createMateria("ice"));
//     std::cout << "materia equipped!\n";
//     boss->equip(src->createMateria("cure"));
//     std::cout << "materia equipped!\n";
//     boss->equip(src->createMateria("cure"));
//     std::cout << "materia equipped!\n";

//     delete src;
//     delete boss;

//     return (0);
// }
    
//     me->equip(tmp);
    
//     tmp = src->createMateria("cure");
    
//     me->equip(tmp);
    
//     ICharacter* bob = new Character("bob");
    
//     me->use(0, *bob);
//     me->use(1, *bob);
//     me->use(3, *bob);
//     me->use(-2, *bob);
//     me->use(4, *bob);

//     me->unequip(5);
//     me->unequip(-2);
//     me->unequip(1);
//     me->unequip(3);
//     me->unequip(0);

//     me->use(0, *bob);
//     me->equip(tmp);
//     me->use(0, *bob);

//     delete bob;
//     delete me;
//     // delete src;
    
//     return (0);
// }
//     tmp = src->createMateria("ice");int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
    
//     ICharacter* boss = new Character("Boss");
//     boss->equip(src->createMateria("ice"));
//     std::cout << "materia equipped!\n";
//     boss->equip(src->createMateria("ice"));
//     std::cout << "materia equipped!\n";
//     boss->equip(src->createMateria("ice"));
//     std::cout << "materia equipped!\n";
//     boss->equip(src->createMateria("cure"));
//     std::cout << "materia equipped!\n";
//     boss->equip(src->createMateria("cure"));
//     std::cout << "materia equipped!\n";

//     delete src;
//     delete boss;

//     return (0);
// }
    
//     me->equip(tmp);
    
//     tmp = src->createMateria("cure");
    
//     me->equip(tmp);
    
//     ICharacter* bob = new Character("bob");
    
//     me->use(0, *bob);
//     me->use(1, *bob);
//     me->use(3, *bob);
//     me->use(-2, *bob);
//     me->use(4, *bob);

//     me->unequip(5);
//     me->unequip(-2);
//     me->unequip(1);
//     me->unequip(3);
//     me->unequip(0);

//     me->use(0, *bob);
//     me->equip(tmp);
//     me->use(0, *bob);

//     delete bob;
//     delete me;
//     // delete src;
    
//     return (0);
// }

// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
    
//     ICharacter* boss = new Character("Boss");
//     AMateria* tmp;

//     tmp = src->createMateria("ice");
//     boss->equip(tmp);
//     std::cout << "materia equipped!\n";
//     tmp = src->createMateria("Cure");
//     boss->equip(tmp);
//     std::cout << "materia equipped!\n";
//     boss->equip(src->createMateria("ice"));
//     std::cout << "materia equipped!\n";
//     boss->equip(src->createMateria("cure"));
//     std::cout << "materia equipped!\n";
//     boss->equip(src->createMateria("cure"));
//     std::cout << "materia equipped!\n";

//     delete src;
//     delete boss;

//     return (0);
// }
// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
    
//     ICharacter* boss = new Character("Boss");
//     boss->equip(src->createMateria("ice"));
//     std::cout << "materia equipped!\n";
//     boss->equip(src->createMateria("ice"));
//     std::cout << "materia equipped!\n";
//     boss->equip(src->createMateria("ice"));
//     std::cout << "materia equipped!\n";
//     boss->equip(src->createMateria("cure"));
//     std::cout << "materia equipped!\n";
//     boss->equip(src->createMateria("cure"));
//     std::cout << "materia equipped!\n";

//     delete src;
//     delete boss;

//     return (0);
// }