
#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap(std::string name);
    ~FragTrap();

    FragTrap(FragTrap const &ob);
    FragTrap &operator=(FragTrap const &obj);

    void highFivesGuys(void);
    void attack(const std::string &target);
};

#endif