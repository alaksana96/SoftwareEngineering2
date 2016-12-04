/*
 * point.cpp
 *
 *  Created on: 4 Dec 2016
 *      Author: alaksana
 */

#include "point.hpp"

Point::Point(){
	x = 0;
	y = 0;
}

Point::Point(double x_in, double y_in){
	x = x_in;
	y = y_in;
}

double Point::get_x(){
	return x;
}

double Point::get_y(){
	return y;
}

void Point::set_x(double x_in){
	x = x_in;
}

void Point::set_y(double y_in){
	y = y_in;
}

double Point::distance() const{
	return (sqrt(x*x + y*y));

}

double Point::distance(const Point& p) const{
	return sqrt(((x - p.x)*(x - p.x)) + ((y - p.y)*(y - p.y)));
}

void Point::translate(const Point& p){
	x = x + p.x;
	y = y + p.y;
}

Point Point::origin_symmetric(const Point& p) const{
	Point tmp;
	tmp.x = -p.x;
	tmp.y = -p.y;
	return tmp;
}

void Point::origin_symmetric(){
	x = -x;
	y = -y;
}

std::string Point::getPoint(){
	double x = get_x();
	double y = get_y();
	std::stringstream prnt;
	prnt << "(" << x << "," << y << ")";
	return prnt.str();
}

bool Point::operator <(const Point& p1){
	if(distance() < p1.distance()){
		return true;
	}
	else{
		return false;
	}
}

bool operator==(const Point& p1, const Point& p2){
	return (p1.x == p2.x) && (p1.y == p2.y);
}
