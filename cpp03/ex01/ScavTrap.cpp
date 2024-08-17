#include "include/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default constuctor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : name(name), hit_points(10), energy_points (10), attack_damage (0)
{
    std::cout << "String constuctor called: A wild " << name << " appeared" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& other) {*this = other;}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
    {
        this->hit_points = other.hit_points;
        this->energy_points = other.energy_points;
        this->attack_damage = other.attack_damage;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called" << std::endl;
}