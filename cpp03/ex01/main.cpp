
#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap mo("abc");
    mo.beRepaired(10);
    mo.attack("asdf");
    mo.takeDamage(1);
    mo.takeDamage(100000);
    mo.beRepaired(10);

    return 0;
}