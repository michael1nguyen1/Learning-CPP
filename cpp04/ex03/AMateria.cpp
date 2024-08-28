#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
AMateria::AMateria(std::string const &type) : type(type)
{
}

AMateria::AMateria() : type("Unknown")
{
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(const AMateria& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter &)
{

}
