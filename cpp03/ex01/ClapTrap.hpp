
#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

# include <iostream>

class ClapTrap
{
protected:
    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energy;
    unsigned int    _damage;

public:
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap &cpy);
    ClapTrap &operator=(const ClapTrap &obj);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif /* CLAPTRAP_HPP */