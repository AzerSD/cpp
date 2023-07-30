#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(std::string const &name)
	: ClapTrap(name + "_clap_trap"), ScavTrap(), FragTrap(), _name(name) {
	std::cout << "DiamondTrap" << name << "Constructor Called" << std::endl;
	EnergyPoints = ScavTrap::EnergyPoints;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = obj;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap" << _name << "Destructor Called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &obj) {
    std::cout << "Assignment of " << _name << "Called" << std::endl;
	if (this != &obj) {
		_name = obj._name;
		HitPoints = obj.HitPoints;
		energy = obj.energy;
		damage = obj.damage;
	}
	return *this;
}

void DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap" << _name << " is " << _name << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}