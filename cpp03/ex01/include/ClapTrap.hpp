#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string);
        ClapTrap(ClapTrap&);
        ClapTrap& operator=(const ClapTrap&);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        int get_hp();
        int get_ep();
        int get_attack();
        void set_attack(int);

    private:
        std::string name;
        int hit_points;
        int energy_points;
        int attack_damage;

};

#endif