#include "Ice.hpp"
#include <iostream>

Ice::Ice()
{
}

Ice::Ice(const Ice &)
{
}

Ice::~Ice()
{
}

Ice &Ice::operator=(const Ice &)
{
	return *this;
}

AMateria *Ice::clone() const
{
	return new Ice;
}

void Ice::use(ICharacter &target)
{
	std::cout << "heals " << target.getName() << "'s wounds" << std::endl;
}
