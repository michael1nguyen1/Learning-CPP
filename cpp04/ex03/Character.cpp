#include "Character.hpp"
#include <iostream>

Character::Character() : name("Unnamed Character")
{
}

Character::Character(std::string name) : name(name)
{
}

Character::Character(const Character &other)
{
	this->name = other.name;
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		if (other.floor[i])
			this->floor[i] = other.floor[i]->clone();
	}
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
			delete inventory[i];
		for (int i = 0; i < 100; i++)
			delete floor[i];
		name = other.name;
		for (int i = 0; i < 4; i++)
			inventory[i] = (other.inventory[i] ? other.inventory[i]->clone() : nullptr);
		for (int i = 0; i < 100; i++)
			floor[i] = (other.floor[i] ? other.floor[i]->clone() : nullptr);
	}
	return *this;
}

Character::~Character()
{
	for (auto a : inventory)
		delete a;
	for (auto a : floor)
		delete a;
}

std::string const &Character::getName() const
{
	return name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			std::cout << "Equipped " << m->getType() << " at slot " << i << std::endl;
			return ;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (!floor[i])
		{
			std::cout << "Material thrown on the flooor" << std::endl;
			floor[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		std::cout << "Unequipping " << inventory[idx]->getType() << " from slot "
		<< idx << std::endl;
		inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		inventory[idx]->use(target);
}

