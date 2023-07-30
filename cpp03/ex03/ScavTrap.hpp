#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    	ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &obj);
		~ScavTrap();

    	ScavTrap &operator=(ScavTrap const &obj);
		void guardGate(void);
		void attack(const std::string &target);
};

#endif