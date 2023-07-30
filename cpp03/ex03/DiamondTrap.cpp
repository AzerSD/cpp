
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const &name)
	: ClapTrap(name + "_clap_trap"), ScavTrap(), FragTrap(), _name(name) {
	std::cout << "DiamondTrap" << _name << "Constructor Called" << std::endl;
	_energy = ScavTrap::_energy;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj)
    : ClapTrap(obj), ScavTrap(obj), FragTrap(obj), _name(obj._name) {
    std::cout << "DiamondTrap " << _name << " Copy Constructor Called" << std::endl;
    _energy = obj._energy;
}


DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap" << _name << "Destructor Called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &obj) {
    std::cout << "Assignment of " << _name << "Called" << std::endl;
	if (this != &obj) {
		_name = obj._name;
		_hitPoints = obj._hitPoints;
		_energy = obj._energy;
		_damage = obj._damage;
	}
	return *this;
}

void DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap" << _name << " is " << _name << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}