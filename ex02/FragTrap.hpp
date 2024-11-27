#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#include <iostream>
#include "ClapTrap.hpp"

// ************************************************************************** //
//                             FragTrap  Class                                //
// ************************************************************************** //

class FragTrap : public ClapTrap
{

    public:
        FragTrap(std::string name);
        ~FragTrap();

        void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif
