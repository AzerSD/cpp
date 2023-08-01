
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main( void )
{
    DiamondTrap mo("Dia");

	std::cout << std::endl;

	mo.attack("Mia");
	mo.takeDamage(20);
	mo.beRepaired(10);
	mo.guardGate();
	mo.highFivesGuys();
	mo.whoAmI();

	std::cout << std::endl;

    return 0;
}