/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 21:28:04 by asioud            #+#    #+#             */
/*   Updated: 2023/05/14 21:50:26 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: harlFilter LEVEL\n";
        return 1;
    }

    Harl harl;
    std::string level = argv[1];
    if (level == "DEBUG") {
        harl.complain("DEBUG");
    } else if (level == "INFO") {
        harl.complain("DEBUG");
        harl.complain("INFO");
    } else if (level == "WARNING") {
        harl.complain("DEBUG");
        harl.complain("INFO");
        harl.complain("WARNING");
    } else if (level == "ERROR") {
        harl.complain("DEBUG");
        harl.complain("INFO");
        harl.complain("WARNING");
        harl.complain("ERROR");
    } else {
        std::cout << "Probably complaining about insignificant problems\n"
                  << "Although there are several ways to deal with Harl, one of the most effective is to SWITCH it off.\n";
    }

    return 0;
}
