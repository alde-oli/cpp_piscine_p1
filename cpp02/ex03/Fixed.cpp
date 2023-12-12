#include "Fixed.hpp"
#include <cmath>


////////////////////////////////
//constructors and destructors//
////////////////////////////////

Fixed::Fixed()
	: _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int value)
	: _value(value << _bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
	: _value(static_cast<int>(roundf(value * (1 << _bits))))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//////////////////////////
//copy operator overload//
//////////////////////////

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		_value = rhs._value;
	return *this;
}

/////////////////////////////////
//comparison operators overload//
/////////////////////////////////

bool	Fixed::operator>(const Fixed &rhs) const
{
	return _value > rhs._value;
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return _value < rhs._value;
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return _value >= rhs._value;
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return _value <= rhs._value;
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return _value == rhs._value;
}

/////////////////////////////////
//arithmetic operators overload//
/////////////////////////////////

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	Fixed	result;
	result._value = _value + rhs._value;
	return result;
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	Fixed	result;
	result._value = _value - rhs._value;
	return result;
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	Fixed	result(this->toFloat() * rhs.toFloat());
	return result;
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	Fixed	result(this->toFloat() / rhs.toFloat());
	return result;
}

////////////////////////////////
//increment operators overload//
////////////////////////////////

Fixed	&Fixed::operator++(void)
{
	this->_value++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	this->_value++;
	return temp;
}

//////////////////////////////
//min-max functions overload//
//////////////////////////////

const Fixed	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return b;
	else
		return a;
}

Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return b;
	else
		return a;
}

const Fixed	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return b;
	else
		return a;
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return b;
	else
		return a;
}

////////////////////////////////////
//send to stream operator overload//
////////////////////////////////////

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

////////////////////
//value conversion//
////////////////////

float	Fixed::toFloat() const
{
	return static_cast<float>(_value) / (1 << _bits);
}

int		Fixed::toInt() const
{
	return _value >> _bits;
}

//////////////////////
//raw bits functions//
//////////////////////

int		Fixed::getRawBits() const
{
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}
