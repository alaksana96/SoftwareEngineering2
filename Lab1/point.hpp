/*
 * point.hpp
 *
 *  Created on: 7 Nov 2016
 *      Author: apl115
 */

#include <cmath>
#include <string>

class Point{
public:
	Point();
	Point(double x_in, double y_in);
	double get_x();
	double get_y();
	void set(double x_in, double y_in);
	std::string getPoint();
	double get_distance();
	double distanceBetweenPoints(Point p2);
	void origin_symmetric();
	void translate(Point P2);
private:
	double x;
	double y;
	double distance;
};
