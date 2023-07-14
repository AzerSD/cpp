/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 06:06:44 by asioud            #+#    #+#             */
/*   Updated: 2023/07/04 21:07:34 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include <iostream>

Zombie::Zombie(std::string zombieName) : name(zombieName) {}

Zombie::~Zombie() {
    std::cout << RED << "Zombie " << name << " has been destroyed." << RESET << std::endl;
}

void Zombie::announce(void) const{
    std::cout << GREEN << name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

Zombie* newZombie(std::string name) {
    Zombie* zombie = new Zombie(name); /* heap allocation */
    return zombie;
}

void randomChump(std::string name) {
    Zombie zombie(name); /* stack allocation */
    zombie.announce();
}
