/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:41:26 by asioud            #+#    #+#             */
/*   Updated: 2023/05/09 09:41:36 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Weapon {
private:
    std::string type;

public:
    Weapon(const std::string& type) : type(type) {}

    const std::string& getType() const {
        return type;
    }

    void setType(const std::string& newType) {
        type = newType;
    }
};

class HumanA {
private:
    std::string name;
    Weapon& weapon;

public:
    HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon) {}

    void attack() const {
        std::cout << name << " attacks with their " << weapon.getType() << std::endl;
    }
};

class HumanB {
private:
    std::string name;
    Weapon* weapon;

public:
    HumanB(const std::string& name) : name(name), weapon(nullptr) {}

    void setWeapon(Weapon& weapon) {
        this->weapon = &weapon;
    }

    void attack() const {
        if (weapon) {
            std::cout << name << " attacks with their " << weapon->getType() << std::endl;
        } else {
            std::cout << name << " has no weapon" << std::endl;
        }
    }
};

int main() {
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
    return 0;
}