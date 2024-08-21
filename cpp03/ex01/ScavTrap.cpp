#include "include/ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap: String constructor called: A wild " << name << " appeared" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    std::cout << "ScavTrap: Copy constructor called" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other); 
    }
    std::cout << "ScavTrap: Assignment operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: Destructor called for " << name << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->hit_points == 0)
	{
		std::cout << "ScavTrap " << this->name << " is dead"<< std::endl;
		return;
	}
	if (this->energy_points == 0)
	{
		std::cout << "ScavTrap " << this->name << " is useless"<< std::endl;
		return;
	}
	this->energy_points -= 1;
	std::cout << "ScavTrap " << this->name << " attacks " << target << " ";
	std::cout << this->attack_damage << " Points of damage was done" <<std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap: " << name << " is now a gate guard" << std::endl;
}