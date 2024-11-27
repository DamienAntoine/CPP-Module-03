#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hp = 100;
    this->mp = 100;
    this->_attack = 30;
    std::cout << "FragTrap " << name << " created." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destroyed." << std::endl;
}

void FragTrap::attack(const std::string& target)
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

void FragTrap::highFivesGuys(void)
{
    std::cout << name << " requests a positive high five!" << std::endl;
}

