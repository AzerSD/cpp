#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
	DiamondTrap();
	DiamondTrap(std::string const &name);
	DiamondTrap(DiamondTrap const &obj);
	~DiamondTrap();
	DiamondTrap &operator=(DiamondTrap const &obj);
	void whoAmI(void);
	void attack(const std::string &target);

private:
    std::string _name;
};

#endif