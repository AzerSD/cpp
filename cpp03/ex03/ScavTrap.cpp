
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() {
	_hitPoints = 100;
	_energy = 50;
    _damage = 20;
	std::cout << "ClapTrap " << _name << " is Created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    _name = name;
	_hitPoints = 100;
	_energy = 50;
    _damage = 20;
	std::cout << "ClapTrap " << _name << " is Created!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj) : ClapTrap(obj) {
    *this = obj;
    std::cout << "ScavTrap copy constructor called" << std::endl;
    return;
}

ScavTrap &ScavTrap::operator=( const ScavTrap& obj ) {
    this->_name = obj._name;
    this->_hitPoints = obj._hitPoints;
    this->_energy = obj._energy;
    this->_damage = obj._damage;
    return *this;
}

void    ScavTrap::attack( std::string const &target ) {
    if (_energy <= 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
    _energy -= 1;
}

void ScavTrap::guardGate(void) {
    std::cout << _name << "GUARDED" << std::endl;
}
