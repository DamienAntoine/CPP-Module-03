#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), mp(10), _attack(0)
{
	std::cout << "Claptrap " << name << " created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap " << name << " destroyed." << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
	if (hp <= 0)
		return ;
	if (mp <= 0)
	{
		std::cout
			<< name
			<< " tried to attack but doesn't have enough MP."
			<< std::endl;
			return ;
	}

    std::cout
        << name
        << " attacks "
        << target
        << ", causing "
        << _attack
        << " points of damage !"
        << std::endl;
	mp -= 1;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (hp <= 0)
    {
        std::cout
            << name
            << " is already K.O, but got hit again for "
            << amount
            << " damage."
            << std::endl;
        return ;
    }
    std::cout
        << name
        << " got attacked for "
        << amount
        << " damage !"
        << std::endl;

    if (this->hp > amount)
        this->hp -= amount;
    else
    {
        this->hp = 0;
        std::cout
            << name
            << " is K.O !"
            << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (hp <= 0)
    {
        std::cout
            << name
            << " is K.O and can't heal."
            << std::endl;
            return ;
    }
    if (mp <= 0)
    {
        std::cout
            << name
            << " tried to attack but doesn't have enough MP."
            << std::endl;
            return ;
    }
    hp += amount;
    mp -= 1;
    std::cout
        << name
        << " healed for "
        << amount
        << " Health Points ! (-1MP)"
        << std::endl;
}
