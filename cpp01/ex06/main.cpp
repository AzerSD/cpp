/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 21:28:04 by asioud            #+#    #+#             */
/*   Updated: 2023/07/04 22:33:39 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << RED << "Usage: harlFilter LEVEL\n" << RESET;
        return 1;
    }

    Harl harl;
    std::string level = argv[1];
    if (level == "DEBUG")
    {
        harl.complain("DEBUG");
        harl.complain("INFO");
        harl.complain("WARNING");
        harl.complain("ERROR");
    }
    else if (level == "INFO")
    {
        harl.complain("INFO");
        harl.complain("WARNING");
        harl.complain("ERROR");
    }
    else if (level == "WARNING")
    {
        harl.complain("WARNING");
        harl.complain("ERROR");
    }
    else if (level == "ERROR")
    {
        harl.complain("ERROR");
    }
    else
    {
        std::cout << ORANGE << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
        std::cout << RESET;
    }

    return 0;
}
