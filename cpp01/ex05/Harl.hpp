/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:12:46 by asioud            #+#    #+#             */
/*   Updated: 2023/05/13 19:37:59 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HARL_H__
# define __HARL_H__

#include <string>

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
