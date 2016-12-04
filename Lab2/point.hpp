/*
 * point.hpp
 *
 *  Created on: 4 Dec 2016
 *      Author: alaksana
 */
#include <math.h>
#include <iostream>
#include <sstream>

class Point{
	public:
		Point();
		Point(double x_in, double y_in);

		double get_x();
		double get_y();

		void set_x(double x_in);
		void set_y(double y_in);

		double distance() const;
		double distance(const Point& p) const;

		void translate(const Point& p);

		Point origin_symmetric(const Point& p) const;
		void origin_symmetric();
		std::string getPoint();

		friend bool operator==(const Point& p1, const Point& p2);

		bool operator<(const Point& p1);

	private:
		double x;
		double y;
};


