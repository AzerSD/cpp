/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 06:06:44 by asioud            #+#    #+#             */
/*   Updated: 2023/05/09 07:51:27 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <new>

Zombie::Zombie(std::string zombieName) : name(zombieName) {}


Zombie::~Zombie() {
    std::cout << RED << "Zombie " << name << " has been destroyed." << RESET << std::endl;
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

Zombie* zombieHorde(int N, std::string name) {
    Zombie* horde = static_cast<Zombie*>(operator new[](N * sizeof(Zombie)));
    for (int i = 0; i < N; ++i) {
        new (horde + i) Zombie(name);
    }
    return horde;
}
