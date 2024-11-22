#include "ClapTrap.hpp"

void    ClapTrap::attack(const std::string &target)
{
    if (hp <= 0)
        return ;

    std::cout
        << name
        << "attacks"
        << target
        << ", causing"
        << attack
        << "points of damage !"
        << std::endl;

}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (hp <= 0)
    {
        std::cout
            << name
            << "is already K.O, but got hit again for"
            << amount
            << "damage."
            << std::endl;
        return ;
    }
    std::cout
        << name
        << "got attacked for"
        << amount
        << "damage !"
        << std::endl;

    if (this->hp > amount)
        this->hp -= amount;
    else
    {
        this->hp = 0;
        std::cout
            << name
            << "is K.O !"
            << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (hp <= 0)
    {
        std::cout
            << name
            << "is K.O and can't heal."
            << std::endl;
            return ;
    }
    if (mp <= 0)
    {
        std::cout
            << name
            << "does not have enough MP to heal."
            << std::endl;
            return ;
    }
    hp += amount;
    mp -= 1;
    std::cout
        << name
        << "healed for"
        << amount
        << "Health Points ! (-1MP)"
        << std::endl
        << "Remaining MP:"
        << mp
        << std::endl;
}