#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap clap("Bob");

    clap.attack("Shaco");
	clap.attack("Shaco");
	clap.attack("Shaco");
	clap.takeDamage(5);
	clap.beRepaired(10);
	clap.attack("Shaco");
	clap.attack("Shaco");
	clap.attack("Shaco");
	clap.attack("Shaco");
	clap.attack("Shaco");
	clap.attack("Shaco");
	clap.takeDamage(5);
	clap.beRepaired(5);
	clap.takeDamage(5);
	clap.attack("Shaco");
	clap.takeDamage(500);
	clap.takeDamage(10);
	clap.beRepaired(50);

    return EXIT_SUCCESS;
}
