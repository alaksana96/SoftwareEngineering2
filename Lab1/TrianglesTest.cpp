/*
 * TrianglesTest.cpp
 *
 *  Created on: Nov 12, 2016
 *      Author: LaksanaAufar
 */

#include <iostream>
#include "triangle.hpp"

using namespace std;

int main(){

	Point p1;
	Point p2(1,0);
	Point p3(0,1);

	Triangle myTriangle(p1, p2, p3);

	double perim = myTriangle.perimeter();
	cout << "The perimeter: " << perim << endl;

	double xin, yin;
	cout << "Enter x: " << endl;
	cin >> xin;
	cout << "Enter y: " << endl;
	cin >> yin;
	Point pTranslate(xin, yin);

	cout << myTriangle.get_a().getPoint() << " " << myTriangle.get_b().getPoint() << " " << myTriangle.get_c().getPoint() << endl;
	cout << "Translate by: " << pTranslate.getPoint() << endl;
	myTriangle.translate(pTranslate);
	cout << myTriangle.get_a().getPoint() << " " << myTriangle.get_b().getPoint() << " " << myTriangle.get_c().getPoint() << endl;

	return 0;
}
