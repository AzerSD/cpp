
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main( void )
{
    ScavTrap mo("bot");
	mo.attack("Helllllll");
	mo.takeDamage(99);
	mo.takeDamage(1);
	mo.beRepaired(10);
	mo.takeDamage(1);
    mo.guardGate();

    return 0;
}