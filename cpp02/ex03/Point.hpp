#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(const Point &src);
		Point(const Fixed x, const Fixed y);
		Point(const float x, const float y);

		Point	&operator=(const Point &rhs);

		Fixed	getX() const;
		Fixed	getY() const;

		~Point();

	private:
		Fixed	_x;
		Fixed	_y;
};

#endif