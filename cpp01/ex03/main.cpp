/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:41:26 by asioud            #+#    #+#             */
/*   Updated: 2023/07/04 21:55:01 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

const std::string RESET     = "\033[0m";
const std::string GREEN     = "\033[32m";
const std::string YELLOW    = "\033[33m";
const std::string RED       = "\033[31m";
const std::string CYAN      = "\033[36m";

class Weapon {
private:
    std::string type;

public:
    Weapon(const std::string &type) : type(type) {}

    const std::string &getType() const {
        return type;
    }

    void setType(const std::string &newType) {
        type = newType;
    }
};

class HumanA {
private:
    std::string name;
    Weapon &weapon;

public:
    HumanA(const std::string &name, Weapon &weapon) : name(name), weapon(weapon) {}

    void attack() const {
        std::cout << CYAN << name << RED << " attacks with their " \
        << GREEN << weapon.getType() << RESET << std::endl;
    }
};

class HumanB {
private:
    std::string name;
    Weapon  *weapon;

public:
    HumanB(const std::string& name) : name(name), weapon(nullptr) {}

    void setWeapon(Weapon& weapon) {
        this->weapon = &weapon;
    }

    void attack() const {
        if (weapon) {
            std::cout << CYAN << name << RED << " attacks with their " \
            << GREEN << weapon->getType() << RESET << std::endl;
        } else {
            std::cout << CYAN << name << RED << " attacks with bare hands " << RESET << std::endl;
        }
    }
};

int main() {
    std::cout << YELLOW << "---------- TEST CASE 1 ----------" << RESET << std::endl;
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    std::cout << YELLOW << "---------- TEST CASE 2 ----------" << RESET << std::endl;
    {
        Weapon club = Weapon("Knife");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        HumanB jim("Jim");
        jim.attack();
        jim.attack();
    }
    std::cout << YELLOW << "--------------- END -------------" << RESET << std::endl;
    return 0;
}