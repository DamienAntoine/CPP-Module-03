#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
	this->hp = FragTrap::hp;
	this->mp = ScavTrap::mp;
	this->_attack = FragTrap::_attack;
	std::cout << "DiamondTrap " << this->name << " constructed." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " destructed." << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am a DiamondTrap. My ClapTrap name is: " << ClapTrap::name
	<< " and my name is: " << this->name << std::endl;
}

