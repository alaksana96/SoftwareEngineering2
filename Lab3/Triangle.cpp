/*
 * Triangle.cpp
 *
 *  Created on: Nov 12, 2016
 *      Author: LaksanaAufar
 */

#include "Triangle.hpp"


using namespace std;

Triangle::Triangle(Point p1, Point p2, Point p3)
:point1(p1), point2(p2), point3(p3){

}

Point Triangle::get_p1(){
	return point1;
}

Point Triangle::get_p2(){
	return point2;
}

Point Triangle::get_p3(){
	return point3;
}

void Triangle::set(Point p1, Point p2, Point p3){
	point1 = p1;
	point2 = p2;
	point3 = p3;
}

double Triangle::perimeter(){
	Point p1 = get_p1();
	Point p2 = get_p2();
	Point p3 = get_p3();

	double s1to2, s2to3, s3to1;
	s1to2 = p1.distanceBetweenPoints(p2);
	s2to3 = p2.distanceBetweenPoints(p3);
	s3to1 = p3.distanceBetweenPoints(p1);

	return s1to2 + s2to3 + s3to1;
}

void Triangle::translate(Point p){
	Point p1 = get_p1();
	Point p2 = get_p2();
	Point p3 = get_p3();

	p1.translate(p);
	p2.translate(p);
	p3.translate(p);

	set(p1, p2, p3);
}
