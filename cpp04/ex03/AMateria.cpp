#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{
}

AMateria::AMateria()
{
}

AMateria::AMateria(const AMateria &)
{
}

AMateria &AMateria::operator=(const AMateria& other)
{
	// TODO: insert return statement here
}

std::string const &AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter &target)
{
}
