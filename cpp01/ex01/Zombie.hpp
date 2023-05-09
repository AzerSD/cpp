/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 06:04:39 by asioud            #+#    #+#             */
/*   Updated: 2023/05/09 08:36:46 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <string>

const std::string RESET     = "\033[0m";
const std::string GREEN     = "\033[32m";
const std::string YELLOW    = "\033[33m";
const std::string RED       = "\033[31m";
const std::string CYAN      = "\033[36m";


class Zombie {

private:
    std::string name;

public:
    Zombie(); // Default constructor
    Zombie(std::string name);
    ~Zombie( void );

    void    announce(void) const;
    void    setZombieName( std::string name );

};

Zombie  *zombieHorde( int N, std::string name );
Zombie  *newZombie( std::string name );
void    randomChump( std::string name );


#endif // __ZOMBIE_H__