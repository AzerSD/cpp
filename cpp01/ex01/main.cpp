/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 05:51:52 by asioud            #+#    #+#             */
/*   Updated: 2023/07/04 21:22:09 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

#include "Zombie.hpp"

int main() {
    int hordeSize = 5;
    std::string hordeName = "ZombieHorde";
    Zombie* horde = zombieHorde(hordeSize, hordeName);

    for (int i = 0; i < hordeSize; ++i)
        horde[i].announce();

    for (int i = 0; i < hordeSize; ++i)
        horde[i].~Zombie();

    delete[] horde;
    return 0;
}

