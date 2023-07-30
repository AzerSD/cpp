
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
    FragTrap mo("Frag1");
	mo.attack("Helllllll");
	mo.takeDamage(80);
	mo.beRepaired(10);
	mo.highFivesGuys();

    return 0;
}