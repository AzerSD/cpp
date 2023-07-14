/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:12:33 by asioud            #+#    #+#             */
/*   Updated: 2023/07/04 22:16:00 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

const std::string RESET     = "\033[0m";
const std::string GREEN     = "\033[32m";
const std::string YELLOW    = "\033[33m";
const std::string RED       = "\033[31m";
const std::string CYAN      = "\033[36m";


Harl::Harl() :
    debugPtr(&Harl::debug),
    infoPtr(&Harl::info),
    warningPtr(&Harl::warning),
    errorPtr(&Harl::error) {}

void Harl::complain(std::string level)
{
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

    if (ptr)
        (this->*ptr)();
}

void Harl::debug() {
    std::cout <<  RED << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << RESET << std::endl;
}

void Harl::info() {
    std::cout <<  YELLOW << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
}

void Harl::warning() {
    std::cout <<  CYAN << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET << std::endl;
}

void Harl::error() {
    std::cout << GREEN << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

