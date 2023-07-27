
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

    bool operator>(Fixed const &other) const;
	bool operator<(Fixed const &other) const;
	bool operator>=(Fixed const &other) const;
	bool operator<=(Fixed const &other) const;
	bool operator==(Fixed const &other) const;
	bool operator!=(Fixed const &other) const;

	Fixed operator+(Fixed const &other);
	Fixed operator-(Fixed const &other);
	Fixed operator*(Fixed const &other);
	Fixed operator/(Fixed const &other);

	Fixed operator++(int);
	Fixed operator++();
	Fixed operator--(int);
	Fixed operator--();

	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);
Fixed const &min(Fixed const &a, Fixed const &b);
Fixed const &max(Fixed const &a, Fixed const &b);
Fixed &min(Fixed &a, Fixed &b);
Fixed &max(Fixed &a, Fixed &b);

#endif