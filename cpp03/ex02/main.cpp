#include "include/ClapTrap.hpp"
#include "include/FragTrap.hpp"

void print_scav(FragTrap&n)
{
    std::cout << n.get_name() << "\n" << n.get_hp() << " hit points" << std::endl;
    std::cout << n.get_ep() << " energy points" << std::endl;
    std::cout << n.get_attack() << " attack damage\n" << std::endl;
}

int main()
{
	FragTrap Hulk("Hulk");
	FragTrap B("B");
	FragTrap A(Hulk);

	print_scav(Hulk);
	Hulk.takeDamage(9);
	print_scav(Hulk);
	print_scav(B);
	Hulk = B;
	print_scav(Hulk);
	print_scav(A);
	Hulk.highFivesGuys();

    return 0;
}