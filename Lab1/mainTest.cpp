/*
 * mainTest.cpp
 *
 *  Created on: 7 Nov 2016
 *      Author: apl115
 */

#include <iostream>
#include "point.hpp"

using namespace std;

int main(){
	Point p1(3, -2);
	Point p2;

	cout << "initial point: " << p1.get_x() << " " << p1.get_y()<< endl;
	p1 = p1.origin_symmetric(p1);
	cout << "after the first transformation: " << p1.get_x() << " " << p1.get_y() << endl;

	cout << "\ntesting with no parameters: " << p2.get_x() << " " << p2.get_y() << endl;

	p2.set_x(10);
	p2.set_y(11);
	cout << "\ntesting setter methods " << p2.get_x() << " " << p2.get_y() << endl;

	string testingGetPoint = p2.getPoint();
	cout << "\ntesting getPoint(): " << testingGetPoint << endl;

	cout << "\ndistance from origin: " << p2.distance() << endl;

	cout << "\ndistance between (-3,2) and (10, 11): " << p1.distance(p2) << endl;

	p1.translate(p2);
	cout << "\ntranslation between (-3,2) and (10,11): " << p1.getPoint() << endl;
}
