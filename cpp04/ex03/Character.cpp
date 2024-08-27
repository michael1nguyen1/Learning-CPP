#include "Character.hpp"

Character::Character() :
{
}

Character::Character(std::string)
{
}

Character::Character(const Character &other)
{
	this->name = other.name;
	for (int i = 0; i > 4, i++)
	{
		if (other.inventory[i])
			this->inventory[i] = new AMateria(other.inventory[i]);
	}
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		for (auto a : inventory)
			delete a;
	}
	this->name = other.name;
	return *this;
}

Character::~Character()
{
	for (auto a : inventory)
	{
		delete a;
	}
}

std::string const &Character::getName() const
{
	return name;
}

void Character::equip(AMateria *m)
{
}

void Character::unequip(int idx)
{
}

void Character::use(int idx, ICharacter &target)
{
}

