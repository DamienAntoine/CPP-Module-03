#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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

    return 0;
}
