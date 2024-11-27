#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include <iostream>
#include "ClapTrap.hpp"

// ************************************************************************** //
//                             ScavTrap  Class                                //
// ************************************************************************** //

class ScavTrap : public ClapTrap
{

    public:
        ScavTrap(std::string name);
        ~ScavTrap();

        void attack(const std::string& target);
        void guardGate();
};

#endif
