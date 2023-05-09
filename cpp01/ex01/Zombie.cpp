/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 06:06:44 by asioud            #+#    #+#             */
/*   Updated: 2023/05/09 08:36:12 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <new>

Zombie::Zombie() {}

Zombie::Zombie(std::string zombieName) : name(zombieName) {}

Zombie::~Zombie() {
    std::cout << RED << "Zombie " << name << " has been destroyed." << RESET << std::endl;
}

void Zombie::setZombieName(std::string name) {
    this->name = name;
}

void Zombie::announce(void) const{
    std::cout << GREEN << name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

Zombie* newZombie(std::string name) {
    Zombie* zombie = new Zombie(name);
    return zombie;
}

void randomChump(std::string name) {
    Zombie zombie(name);
    zombie.announce();
}

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        horde[i].setZombieName(name);
    }
    return horde;
}
