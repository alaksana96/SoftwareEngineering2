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

	cout << "initial point: " << p1.get_x() << " " << p1.get_y() << endl;
	p1 = p1.origin_symmetric(p1);
	cout << "after the first transformation: " << p1.get_x() << " " << p1.get_y() << endl;


}


