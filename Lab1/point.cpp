/*
 * point.cpp
 *
 *  Created on: 7 Nov 2016
 *      Author: apl115
 */

#include "point.hpp"

Point::Point(){
	x = 0;
	y = 0;
	distance = 0;
}

Point::Point(double x_in, double y_in)
: x(x_in), y(y_in), distance(sqrt(x^2 + y^2)) {
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
	distance = sqrt(x^2 + y^2);
}
std::string Point::getPoint(){
	int x = get_x();
	int y = get_y();
	return ("("+x + "," + y +")");
}
double Point::get_distance(){
	return distance;
}
double Point::distanceBetweenPoints(Point p2){
	int x1 = get_x(),
			y1 = get_y(),
			x2 = p2.get_x(),
			y2 = p2.get_y();
	return sqrt((x1-x2)^2 + (y1-y2)^2);
}

void Point::origin_symmetric(){
	set(-get_x(), -get_y());
}

void Point::translate(Point p2){
	set(get_x()+p2.get_x(), get_y()+p2.get_y());
}
