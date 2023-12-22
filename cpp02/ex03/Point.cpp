#include "Point.hpp"

////////////////////////////////
//constructors and destructors//
////////////////////////////////

Point::Point()
	: _x(0), _y(0)
{
}

Point::Point(const Point &src)
{
	*this = src;
}

Point::Point(const Fixed x, const Fixed y)
	: _x(x), _y(y)
{
}

Point::Point(const float x, const float y)
	: _x(x), _y(y)
{
}

Point::~Point()
{
}

//////////////////////////
//copy operator overload//
//////////////////////////

Point &Point::operator=(const Point &rhs)
{
	if (this != &rhs)
	{
		_x = rhs._x;
		_y = rhs._y;
	}
	return (*this);
}

///////////
//getters//
///////////

Fixed	Point::getX() const
{
	return (_x);
}

Fixed	Point::getY() const
{
	return (_y);
}