/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 08:29:45 by asioud            #+#    #+#             */
/*   Updated: 2023/07/28 11:19:25 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
#include "point.hpp"
#include <iostream>

int main() {

    std::cout << "Is point 1 inside the triangle? " \
        << (bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(30, 15)) ? "Yes" : "No") \
        << std::endl; /* No */
    
    std::cout << "Is point 2 inside the triangle? " \
        << (bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(5, 5)) ? "Yes" : "No") \
        << std::endl; /* Yes */

    std::cout << "Is point 3 inside the triangle? " 
        << (bsp(Point(1, 1), Point(2, 3), Point(3, 1), Point(2, 2)) ? "Yes" : "No") \
        << std::endl; /* Yes */
    
    std::cout << "Is point 4 inside the triangle? " 
        << (bsp(Point(1, 1), Point(2, 3), Point(3, 1), Point(1, 4)) ? "Yes" : "No") \
        << std::endl; /* No */
    return 0;
}