/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 05:51:52 by asioud            #+#    #+#             */
/*   Updated: 2023/05/09 07:53:17 by asioud           ###   ########.fr       */
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

    return 0;
}


/**
 * @brief The goal of the exercise is to understand the differences between
 *        stack and heap memory allocation, as well as the usage of
 *        constructors and destructors in C++.
 * @param newZombie() allocates a new Zombie object on the heap using the
 *        new keyword and returns a pointer to it. This allows you to use 
 *        the object outside the function's scope. However, you need to remember
 *        to manually deallocate the memory when it is no longer needed to avoid
 *        memory leaks.
 * @param randomChump() creates a Zombie object on the stack within the function
 *        scope. This object will be automatically deallocated once the function
 *        finishes executing, and there is no need to manually delete it.

 * Other things Learned:
 * @param constMemeberFunction 
 * @link https://www.learncpp.com/cpp-tutorial/const-class-objects-and-member-functions/
 *
*/