
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap mo("Dia");

	mo.attack("Mia");
	mo.takeDamage(20);
	mo.beRepaired(10);
	mo.guardGate();
	mo.highFivesGuys();
	mo.whoAmI();

    return 0;
}