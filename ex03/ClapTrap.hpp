#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <iostream>

// ************************************************************************** //
//                             ClapTrap  Class                                //
// ************************************************************************** //

class ClapTrap
{
    protected:
        std::string     name;
        unsigned int    hp;
        unsigned int    mp;
        unsigned int    _attack;

    public:
        ClapTrap(std::string name);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif
