#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	Character *a = new Character("bob");
	Character *b = new Character("blah");

	Character *arr[24];

	b.equip(something);

	arr[0] = new Character(*a);
	arr[1] = new Character(*b);
}