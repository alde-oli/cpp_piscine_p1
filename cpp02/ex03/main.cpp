#include <iostream>
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point);

int main()
{
	Point A(0, 0), B(10, 0), C(5, 10);

	Point points[] = {
		Point(5, 5),
		Point(5, 0),
		Point(0, 0),
		Point(15, 5),
		Point(-5, -5),
		Point(5, -1),
		Point(2.50, 5.00),
		Point(10, 0),
		Point(0, 10),
		Point(7.50, 5.00)
	};

	std::cout << "Triangle points are :" << std::endl;
	std::cout << "A : "<< A.getX() << ";" << A.getY() << std::endl;
	std::cout << "B : "<< B.getX() << ";" << B.getY() << std::endl;
	std::cout << "C : "<< C.getX() << ";" << C.getY() << std::endl << std::endl;

	for (int i = 0; i < 10; ++i)
	{
		std::cout << "Testing point " << i << ": " << points[i].getX() << ";" << points[i].getY() << std::endl;
		std::cout << "Is in triangle? : " << (bsp(A, B, C, points[i]) ? "True" : "False") << std::endl << std::endl;
	}

	return 0;
}
