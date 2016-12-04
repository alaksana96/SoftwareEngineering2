/*
 * triangle.hpp
 *
 *  Created on: 4 Dec 2016
 *      Author: alaksana
 */

#include "point.hpp"

class Triangle{
	public:
		Triangle(Point p1, Point p2, Point p3);

		Point get_a();
		Point get_b();
		Point get_c();

		double perimeter();
		void translate(const Point& p);

	private:
		Point a;
		Point b;
		Point c;
};


