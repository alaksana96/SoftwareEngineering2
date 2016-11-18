#include "point.hpp"

using namespace std;

/*Point::Point(){
	x = 0;
	y = 0;
	distance = 0;
}
*/
Point::Point(double x_in, double y_in) 
: x(x_in), y(y_in) {

}

Point::~Point()
{
	cout << "goodbye " << x << " " << y << endl;
}

double Point::get_x() const{
	return x;
}

double Point::get_y() const{
	return y;
}

double Point::get_distance() const{
	return sqrt(x*x + y*y);
}

void Point::set(double x_in, double y_in) {
	x = x_in;
	y = y_in;
}

string Point::getPoint() {
	double x = get_x();
	double y = get_y();
	stringstream prnt;
	prnt << "(" << x << "," << y << ")";
	return prnt.str();
}

Point Point::origin_symmetric(const Point& p) const{
	Point tmp(-p.x, -p.y);
	return tmp;
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

bool Point::operator<(const Point& p1){
	double a = get_distance();
	double b = p1.get_distance();
	return a < b;
}

bool operator==(const Point& p1, const Point& p2)
{
	return((p1.x == p2.x) && (p1.y == p2.y));
}

ostream& operator<< (ostream& out, const Point& cPoint)
{
	out << "(" << cPoint.x << ", " << cPoint.y << ")";
	return out;
}
