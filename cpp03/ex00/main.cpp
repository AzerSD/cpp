
#include "ClapTrap.hpp"

int main( void ) {

    ClapTrap mo("Clap1");
	mo.attack("Helllllll");
	mo.takeDamage(9);
	mo.takeDamage(1);
	mo.beRepaired(10);
	mo.takeDamage(1);

    return 0;
}