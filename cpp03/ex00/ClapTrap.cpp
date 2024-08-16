#include "include/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constuctor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points (10), attack_damage (0)
{
    std::cout << "String constuctor called: A wild " << name << " appeared" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        this->hit_points = other.hit_points;
        this->energy_points = other.energy_points;
        this->attack_damage = other.attack_damage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

int ClapTrap::get_hp(){return hit_points;}

int ClapTrap::get_ep(){return energy_points;}

int ClapTrap::get_attack(){return attack_damage;}

void ClapTrap::set_attack(int a)
{
    this->attack_damage = a;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->hit_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead"<< std::endl;
		return;
	}
	if (this->energy_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " is useless"<< std::endl;
		return;
	}
	this->energy_points -= 1;
	std::cout << "ClapTrap " << this->name << " attacks " << target << " ";
	std::cout << this->attack_damage << " Points of damage was done" <<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " can't battle"<< std::endl;
		return;
	}
	this->hit_points -= amount;
	std::cout << "ClapTrap " << this->name << " took " << amount << " damage"<< std::endl;
	if (this->hit_points <= 0)
	{
		this->hit_points = 0;
		std::cout << "ClapTrap " << this->name << " dies in an anticlimatic way" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hit_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " can't battle"<< std::endl;
		return;
	}
	if (this->energy_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " is useless"<< std::endl;
		return;
	}
	this->energy_points -= 1;
	this->hit_points += amount;
	std::cout << "ClapTrap " << this->name << " repaired " << amount << " of hit points"<< std::endl;
}