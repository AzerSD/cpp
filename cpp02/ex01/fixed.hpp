
#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
    int					_val;
    static const int	_fBits = 8;

public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &cpy);
    Fixed(int const value);
	Fixed(float const value);
    Fixed &operator=(const Fixed& cpy);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);	

    float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif