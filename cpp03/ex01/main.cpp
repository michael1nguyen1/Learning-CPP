#include "include/ClapTrap.hpp"
#include "include/ScavTrap.hpp"

void print_scav(ScavTrap&n)
{
    std::cout << n.get_name() << "\n" << n.get_hp() << " hit points" << std::endl;
    std::cout << n.get_ep() << " energy points" << std::endl;
    std::cout << n.get_attack() << " attack damage\n" << std::endl;
}

int main()
{
	ScavTrap Hulk("Hulk");
	ScavTrap B("B");
	ScavTrap A(Hulk);

	print_scav(Hulk);
	Hulk.takeDamage(9);
	print_scav(Hulk);
	print_scav(B);
	Hulk = B;
	print_scav(Hulk);
	print_scav(A);
	Hulk.attack("somebody");
	Hulk.guardGate();

    return 0;
}