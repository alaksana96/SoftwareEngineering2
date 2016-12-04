/*
 * triangle.cpp
 *
 *  Created on: 4 Dec 2016
 *      Author: alaksana
 */

#include "triangle.hpp"

Triangle::Triangle(Point p1, Point p2, Point p3){
	a = p1;
	b = p2;
	c = p3;
}

Point Triangle::get_a(){
	return a;
}

Point Triangle::get_b(){
	return b;
}

Point Triangle::get_c(){
	return c;
}

double Triangle::perimeter(){
	double ab, bc, ca;
	ab = a.distance(b);
	bc = b.distance(c);
	ca = c.distance(a);
	return ab + bc + ca;
}

void Triangle::translate(const Point& p){
	a.translate(p);
	b.translate(p);
	c.translate(p);
}
