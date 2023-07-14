/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:11:14 by asioud            #+#    #+#             */
/*   Updated: 2023/07/04 21:33:00 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

const std::string RESET     = "\033[0m";
const std::string GREEN     = "\033[32m";
const std::string YELLOW    = "\033[33m";
const std::string RED       = "\033[31m";
const std::string CYAN      = "\033[36m";


int main() {

    std::string     str        =    "HI THIS IS BRAIN"; /* A String Variable */
    std::string     *stringPTR =    &str;   /* A pointer to The String */
    std::string     &stringREF =    str;    /* A reference to the String */

    std::cout << RED << "Memory address of the string variable: "   << CYAN << &str        << std::endl;
    std::cout << RED << "Memory address held by stringPTR:   "      << CYAN << stringPTR   << std::endl;
    std::cout << RED << "Memory address held by stringREF:   "      << CYAN << &stringREF  << std::endl;

    std::cout << YELLOW << "Value of the string variable:       "   << GREEN << str          << std::endl;
    std::cout << YELLOW << "Value pointed to by stringPTR:      "   << GREEN << *stringPTR   << std::endl;
    std::cout << YELLOW << "Value pointed to by stringREF:      "   << GREEN << stringREF    << std::endl;

    std::cout << RESET;

    return 0;
}
