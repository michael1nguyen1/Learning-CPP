#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other.storage[i])
			storage[i] = other.storage[i]->clone();
		else
			storage[i] = nullptr;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource&other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (other.storage[i])
				storage[i] = other.storage[i]->clone();
			else
				storage[i] = nullptr;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (auto a : storage)
			delete a;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!storage[i])
		{
			storage[i] = m;
			return;
		}
	}
	std::cout << "Nothing happened source is full" << std::endl;
	delete m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
	{
		if (!storage[i])
			return 0;
		if (storage[i]->getType() == type)
			return storage[i]->clone();
		else if (storage[i]->getType() == type)
			return storage[i]->clone();
	}
	return 0;
}
