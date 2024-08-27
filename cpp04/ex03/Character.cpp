#include "Character.hpp"
#include <iostream>

Character::Character() : name("Unnamed Character")
{
    for (int i = 0; i < 4; i++)
        inventory[i] = nullptr;
    for (int i = 0; i < 100; i++)
        floor[i] = nullptr;
}

Character::Character(std::string name) : name(name)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = nullptr;
    for (int i = 0; i < 100; i++)
        floor[i] = nullptr;
}

Character::Character(const Character &other)
{
	this->name = other.name;
	for (int i = 0; i > 4; i++)
	{
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
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
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == 0)
		{
			inventory[i] = m;
			return ;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (floor[i] == 0)
		{
			std::cout << "Material thrown on the flooor" << std::endl;
			floor[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if(inventory[idx])
		inventory[idx] = 0;
}

void Character::use(int idx, ICharacter &target)
{
}

