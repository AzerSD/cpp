
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main( void )
{
    FragTrap mo("bot");
	mo.attack("Helllllll");
	mo.takeDamage(99);
	mo.takeDamage(1);
	mo.beRepaired(10);
	mo.takeDamage(1);

    return 0;
}