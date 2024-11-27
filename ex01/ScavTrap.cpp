#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hp = 100;
    this->mp = 50;
    this->_attack = 20;
    std::cout << "ScavTrap " << name << " created." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destroyed." << std::endl;
}

void ScavTrap::attack(const std::string& target)
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

void ScavTrap::guardGate()
{
    std::cout << name << " is now in Gate keeper mode." << std::endl;
}
