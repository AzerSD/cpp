#include "fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _val = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    _val = cpy._val;
}

Fixed &Fixed::operator=(const Fixed &cpy)
{
    std::cout << "Copy assignment operator calle" << std::endl;
    if (this != &cpy)
        this->_val = cpy._val;
    return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_val);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_val = raw;
}

/* ex02 */

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_val = (value << Fixed::_fBits);
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_val = roundf(value * (1 << Fixed::_fBits));
}

float Fixed::toFloat(void) const
{
	return ((float)this->_val / (float)(1 << Fixed::_fBits));
}

int Fixed::toInt(void) const
{
	return (this->_val >> Fixed::_fBits);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}