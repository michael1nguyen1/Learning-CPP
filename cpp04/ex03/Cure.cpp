#include "Cure.hpp"
#include <iostream>

Cure::Cure()
{
}

Cure::Cure(const Cure &)
{
}

Cure::~Cure()
{
}

Cure &Cure::operator=(const Cure& other)
{
	return *this;
}

AMateria *Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter &target)
{
	std::cout << "shoots an ice boly at " << target.getName() << std::endl;
}
