/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:12:33 by asioud            #+#    #+#             */
/*   Updated: 2023/07/04 22:27:58 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>


Harl::Harl() :
    debugPtr(&Harl::debug),
    infoPtr(&Harl::info),
    warningPtr(&Harl::warning),
    errorPtr(&Harl::error)
{
}

void Harl::complain(std::string level) {
    void (Harl::*ptr)(void) = nullptr;
    if (level == "DEBUG") {
        ptr = debugPtr;
    } else if (level == "INFO") {
        ptr = infoPtr;
    } else if (level == "WARNING") {
        ptr = warningPtr;
    } else if (level == "ERROR") {
        ptr = errorPtr;
    }

    if (ptr) {
        (this->*ptr)();
    }
}

void Harl::debug() {
    std::cout << RED << "[ DEBUG ]" << RESET << std::endl;
    std::cout <<  RED << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << RESET << std::endl;
    std::cout << std::endl;
}

void Harl::info() {
    std::cout << YELLOW << "[ INFO ]" << RESET << std::endl;
    std::cout <<  YELLOW << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
    std::cout << std::endl;
}

void Harl::warning() {
    std::cout << CYAN << "[ WARNING ]" << RESET << std::endl;
    std::cout <<  CYAN << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << RESET << std::endl;
    std::cout << std::endl;
}

void Harl::error() {
    std::cout << GREEN << "[ ERROR ]" << RESET << std::endl;
    std::cout << GREEN << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
    std::cout << std::endl;
}

