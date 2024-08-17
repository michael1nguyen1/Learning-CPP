#include "include/ScavTrap.hpp"
#include <iostream>

// Default Constructor
ScavTrap::ScavTrap() : ClapTrap("Default ScavTrap", 100, 50, 20)
{
    std::cout << "Default constructor called for ScavTrap" << std::endl;
}

// Parameterized Constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "String constructor called: A wild " << name << " appeared as ScavTrap" << std::endl;
}

// Copy Constructor
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "Copy constructor called for ScavTrap" << std::endl;
    *this = other; // Calls the assignment operator
}

// Assignment Operator
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other); // Assign base class members
        // No extra members in ScavTrap to assign, but if there were, they would be assigned here
    }
    std::cout << "Assignment operator called for ScavTrap" << std::endl;
    return *this;
}

// Destructor
ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called for ScavTrap" << std::endl;
}