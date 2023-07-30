
# include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energy(10), _damage(0) {
    std::cout << "ClapTrap " << _name << " is Created!" << std::endl;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap" << _name << "Destructor Called" << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap &obj) {
    *this = obj;
    std::cout << "ClapTrap copy constructor called" << std::endl;
    return;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap &obj ) {
    std::cout << "Assignment of " << _name << "Called" << std::endl;
    this->_name = obj._name;
    this->_hitPoints = obj._hitPoints;
    this->_energy = obj._energy;
    this->_damage = obj._damage;
    return *this;
}

void    ClapTrap::attack( std::string const &target ) {
    if (_energy <= 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
    _energy -= 1;
}

void    ClapTrap::takeDamage( unsigned int amount ) {
    if (_hitPoints <= amount)
    {
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " damage!" << std::endl;
    _hitPoints -= amount;
}

void    ClapTrap::beRepaired( unsigned int amount ) {
    if (_energy <= 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
    _energy -= 1;
    _hitPoints += amount;
}
