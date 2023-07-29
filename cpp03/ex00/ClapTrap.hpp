
#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

# include <iostream>

class ClapTrap
{
private:
    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energy;
    unsigned int    _damage;
    ClapTrap();

public:
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap &cpy);
    ClapTrap &operator=(const ClapTrap &obj);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

const std::string RESET     = "\033[0m";
const std::string GREEN     = "\033[32m";
const std::string YELLOW    = "\033[33m";
const std::string RED       = "\033[31m";
const std::string CYAN      = "\033[36m";

#endif /* CLAPTRAP_HPP */