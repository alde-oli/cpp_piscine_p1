#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed denom(((b.getY() - c.getY()) * (a.getX() - c.getX())) + ((c.getX() - b.getX()) * (a.getY() - c.getY())));

	Fixed zero(0);

	if (denom == zero)
		return (0);

	Fixed lambda1((((b.getY() - c.getY()) * (point.getX() - c.getX())) + ((c.getX() - b.getX()) * (point.getY() - c.getY())))
					/ denom);
	
	Fixed lambda2((((c.getY() - a.getY()) * (point.getX() - c.getX())) + ((a.getX() - c.getX()) * (point.getY() - c.getY())))
					/ denom);

	Fixed one(1);

	Fixed lambda3(one - lambda1 - lambda2);


	return ((zero <= lambda1 && lambda1 <= 1) && (zero <= lambda2 && lambda2 <= 1) && (zero <= lambda3 && lambda3 <= 1));
}