#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	std::cout << "ClapTrap tests :" << std::endl;
    ClapTrap clap("Sonic");
    clap.attack("Eggman");
    clap.takeDamage(5);
    clap.beRepaired(3);
	std::cout << std::endl;

	std::cout << "ScavTrap tests :" << std::endl;
    ScavTrap scav("Shadow");
    scav.attack("Mephiles");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();
	std::cout << std::endl;

	std::cout << "FragTrap tests :" << std::endl;
    FragTrap frag("Knuckles");
    frag.attack("Chaos");
    frag.takeDamage(30);
    frag.beRepaired(20);
    frag.highFivesGuys();
	std::cout << std::endl;

	std::cout << "DiamondTrap tests :" << std::endl;
	DiamondTrap diamond("Tails");
	diamond.whoAmI();
	diamond.attack("Eggman");
    diamond.takeDamage(5);
    diamond.beRepaired(3);
	std::cout << std::endl;


    return 0;
}
