#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clap("Sonic");
    clap.attack("Eggman");
    clap.takeDamage(5);
    clap.beRepaired(3);

    ScavTrap scav("Shadow");
    scav.attack("Mephiles");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    FragTrap frag("Knuckles");
    frag.attack("Chaos");
    frag.takeDamage(30);
    frag.beRepaired(20);
    frag.highFivesGuys();

    return 0;
}
