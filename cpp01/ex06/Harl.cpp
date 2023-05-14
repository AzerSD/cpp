/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:12:33 by asioud            #+#    #+#             */
/*   Updated: 2023/05/14 21:55:58 by asioud           ###   ########.fr       */
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
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

