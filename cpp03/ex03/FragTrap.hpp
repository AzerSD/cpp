
#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();

    FragTrap(FragTrap const &ob);
    FragTrap &operator=(FragTrap const &obj);

    void highFivesGuys(void);
    void attack(const std::string &target);
};

#endif