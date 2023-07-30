
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main( void )
{
    ScavTrap bo("bot");
    bo.attack("bot2");
	bo.takeDamage(9);
	bo.beRepaired(2);
	bo.guardGate();

    return 0;
}