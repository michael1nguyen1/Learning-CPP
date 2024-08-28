#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("Cure")
{
}

Cure::Cure(const Cure &other) : AMateria(other)
{
}

Cure::~Cure()
{
}

Cure &Cure::operator=(const Cure& other)
{
	if (this != &other)
        AMateria::operator=(other);
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
