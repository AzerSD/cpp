/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:12:46 by asioud            #+#    #+#             */
/*   Updated: 2023/07/04 22:23:24 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HARL_H__
# define __HARL_H__

#include <string>


const std::string RESET     = "\033[0m";
const std::string GREEN     = "\033[32m";
const std::string YELLOW    = "\033[33m";
const std::string RED       = "\033[31m";
const std::string CYAN      = "\033[36m";
const std::string ORANGE    = "\033[35m";


class Harl {
public:
    Harl();

    void complain(std::string level);

private:
    void debug();
    void info();
    void warning();
    void error();

    void (Harl::*debugPtr)(void);
    void (Harl::*infoPtr)(void);
    void (Harl::*warningPtr)(void);
    void (Harl::*errorPtr)(void);
};

# endif
