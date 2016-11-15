#pragma once

#include <math.h>
#include <sstream>
#include <iostream>

using namespace std;

class Point {
public:
	//Point();
	Point(double x_in, double y_in);
	double get_x() const;
	double get_y() const;
	double* get_xp(){
		return &x;
	}
	void set(double x_in, double y_in);
	std::string getPoint();
	double get_distance() const;
	double distanceBetweenPoints(Point p1);
	Point origin_symmetric(const Point& p) const;
	void translate(Point p1);
	bool operator<(const Point& p1);
	friend bool operator==(const Point& p1, const Point& p2);
	friend ostream& operator<<(ostream& out, const Point& cPoint);
private:
	double x;
	double y;
};
