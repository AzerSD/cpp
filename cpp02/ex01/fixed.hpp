/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 01:59:13 by asioud            #+#    #+#             */
/*   Updated: 2023/07/18 02:40:42 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>
#include <string>

class Fixed
{
private:
    int					_val;
    static const int	_fBits = 8;

public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &cpy);
    Fixed &operator=(const Fixed& cpy);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);	
};

#endif