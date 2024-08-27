#include "Cure.hpp"

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
