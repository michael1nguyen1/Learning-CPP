#include "include/ClapTrap.hpp"
#include "include/FragTrap.hpp"

void print_frag(FragTrap&n)
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

	print_frag(Hulk);
	Hulk.takeDamage(9);
	print_frag(Hulk);
	print_frag(B);
	Hulk = B;
	print_frag(Hulk);
	print_frag(A);
	Hulk.attack("somebody");
	Hulk.highFivesGuys();

    return 0;
}