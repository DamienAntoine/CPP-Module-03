#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <iostream>

// ************************************************************************** //
//                             ClapTrap  Class                                //
// ************************************************************************** //

class ClapTrap {

	private:
        std::string     name;
        int             hp = 10;
        int             mp = 10;
        int             attack = 0;

	public:
        ClapTrap(std::string ctname) : name(ctname) {}
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif