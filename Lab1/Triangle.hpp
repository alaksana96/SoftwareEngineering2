/*
 * Triangle.hpp
 *
 *  Created on: Nov 12, 2016
 *      Author: LaksanaAufar
 */

#ifndef TRIANGLE_HPP_
#define TRIANGLE_HPP_

#include "point.hpp"

using namespace std;

class Triangle{
public:
	Triangle(Point p1, Point p2, Point p3);

	Point get_p1();
	Point get_p2();
	Point get_p3();

	void set(Point p1, Point p2, Point p3);

	double perimeter();
	void translate(Point p);
private:
	Point point1;
	Point point2;
	Point point3;
};


#endif /* TRIANGLE_HPP_ */
