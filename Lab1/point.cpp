#include "point.hpp"

using namespace std;

Point::Point(){
	x = 0;
	y = 0;
	distance = 0;
}

Point::Point(double x_in, double y_in) 
: x(x_in), y(y_in), distance(sqrt(x*x + y*y)) {

}

double Point::get_x() {
	return x;
}

double Point::get_y() {
	return y;
}

double Point::get_distance() {
	return distance;
}

void Point::set(double x_in, double y_in) {
	x = x_in;
	y = y_in;
	distance = sqrt(x*x + y*y);
}

string Point::getPoint() {
	double x = get_x();
	double y = get_y();
	stringstream prnt;
	prnt << "(" << x << "," << y << ")";
	return prnt.str();
}

Point Point::origin_symmetric(Point p1) {
	p1.set(-p1.get_x(), -p1.get_y());
	return p1;
}

double Point::distanceBetweenPoints(Point p1) {
	double x1 = get_x(),
		y1 = get_y(),
		x2 = p1.get_x(),
		y2 = p1.get_y();
	return sqrt(((x1 - x2)*(x1 - x2)) + ((y1 - y2)*(y1 - y2)));
}

void Point::translate(Point p1) {
	set(get_x() + p1.get_x(), get_y() + p1.get_y());
}
