/*
 * point.cpp
 *
 *  Created on: 7 Nov 2016
 *      Author: apl115
 */

#include "point.hpp"


using namespace std;

Point::Point(){
	x = 0;
	y = 0;
	distance = 0;
}

Point::Point(double x_in, double y_in)
: x(x_in), y(y_in), distance(sqrt(x*x + y*y)) {
	//Mareks Initialization List
}

double Point::get_x(){
	return x;
}
double Point::get_y(){
	return y;
}
void Point::set(double x_in, double y_in){
	x = x_in;
	y = y_in;
	distance = sqrt((x*x) + (y*y));
}
string Point::getPoint(){
	int x = get_x();
	int y = get_y();
	stringstream bob;
	bob << "(" << x << "," << y << ")";
	return bob.str();
}
double Point::get_distance(){
	return distance;
}
double Point::distanceBetweenPoints(Point p2){
	int x1 = get_x(),
			y1 = get_y(),
			x2 = p2.get_x(),
			y2 = p2.get_y();
	return sqrt(((x1-x2)^2) + ((y1-y2)^2));
}

Point Point::origin_symmetric(Point p1){
	p1.set(-p1.get_x(), -p1.get_y());
	return p1;
}

void Point::translate(Point p2){
	set(get_x()+p2.get_x(), get_y()+p2.get_y());
}
