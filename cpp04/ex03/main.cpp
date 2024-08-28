#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

int main()
{
	std::cout << "\nTEST1\n" << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	std::cout << "\nTEST2\n" << std::endl;

	Character A = Character("red");
	Character B = Character("blue");
	IMateriaSource *src1 = new MateriaSource();
	AMateria *tmp1;
	for (int i = 0; i < 3; i++)
	{
		tmp1 = new Ice();
		src1->learnMateria(tmp1);
		A.equip(src1->createMateria("ice"));
		tmp1 = new Cure();
		src1->learnMateria(tmp1);
		A.equip(src1->createMateria("cure"));
	}
	for (int i = 0; i < 4; i++)
		A.use(i, B);
	A.unequip(3);
	A.use(3, B);
	delete src1;
}