#pragma once

#include <math.h>
#include <sstream>
#include <iostream>

class Point {
public:
	Point();
	Point(double x_in, double y_in);
	double get_x();
	double get_y();
	void set(double x_in, double y_in);
	std::string getPoint();
	double get_distance();
	double distanceBetweenPoints(Point p1);
	Point origin_symmetric(Point p1);
	void translate(Point p1);
private:
	double x;
	double y;
	double distance;
};
