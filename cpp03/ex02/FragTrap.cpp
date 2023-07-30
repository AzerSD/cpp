
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energy = 50;
    _damage = 20;
	std::cout << "ClapTrap " << _name << " is Created!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor Called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj) : ClapTrap(obj) {
    *this = obj;
    std::cout << "FragTrap copy constructor called" << std::endl;
    return;
}

FragTrap &FragTrap::operator=( const FragTrap& obj ) {
    this->_name = obj._name;
    this->_hitPoints = obj._hitPoints;
    this->_energy = obj._energy;
    this->_damage = obj._damage;
    return *this;
}

void    FragTrap::attack( std::string const &target ) {
    if (_energy <= 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
    _energy -= 1;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap" << _name << "HIGHFIVES!!!" << std::endl;
}
