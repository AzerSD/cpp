
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