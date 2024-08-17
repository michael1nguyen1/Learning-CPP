#include "include/ClapTrap.hpp"

void takes_weapon(ClapTrap &Donald, ClapTrap&Micky)
{
    int weapon = 4;
    std::cout << "They both pick up weapons and gains " << weapon << " power\n" << std::endl;
    Donald.set_attack(weapon);
    Micky.set_attack(weapon);
}

void print_stats(ClapTrap &Donald, ClapTrap&Micky)
{
    std::cout << "\nDonald has " << Donald.get_hp() << " hit points" << std::endl;
    std::cout << Donald.get_ep() << " energy points" << std::endl;
    std::cout << Donald.get_attack() << " attack damage" << std::endl;
   
    std::cout << "\nMicky has " << Micky.get_hp() << " hit points" << std::endl;
    std::cout << Micky.get_ep() << " energy points" << std::endl;
    std::cout << Micky.get_attack() << " attack damage\n" << std::endl;
}

void donald_attacks(ClapTrap &Donald, ClapTrap&Micky)
{
    Donald.attack("Micky");
    Micky.takeDamage(Donald.get_attack());
}

void micky_attacks(ClapTrap &Donald, ClapTrap&Micky)
{
    Micky.attack("Donald");
    Donald.takeDamage(Micky.get_attack());
}

int main()
{
    ClapTrap Donald("Donald");
    ClapTrap Micky("Micky");

    print_stats(Donald, Micky);
    takes_weapon(Donald, Micky);
    donald_attacks(Donald, Micky);
    print_stats(Donald, Micky);
    std::cout << "Micky won't obey commands not enough badges\n" << std::endl;
    std::cout << "Donald attacks again\n" << std::endl;
    donald_attacks(Donald, Micky);
    std::cout << "Micky tries to heal\n" << std::endl;
    Micky.beRepaired(1);
    std::cout << "Micky finally fights back but it might too late..." << std::endl;
    print_stats(Donald, Micky);
    micky_attacks(Donald, Micky);
    donald_attacks(Donald, Micky);

    return 0;
}