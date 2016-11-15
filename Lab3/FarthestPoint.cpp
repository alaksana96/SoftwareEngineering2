/*
 * FarthestPoint.cpp
 *
 *  Created on: Nov 12, 2016
 *  Author: LaksanaAufar
 *
 *  Write a (global) function which takes as argument a vector of points and
 *  returns the index of the one which is farthest from the origin. Write a main
 *	to test the function.
 */

#include <iostream>
#include <vector>
#include "point.hpp"

using namespace std;

int farthestPoint(vector<Point>& points);
/*
int main(){
	vector<Point> vecPoint;
	double xin, yin;
	cout << "Enter x: " << endl;
	cin >> xin;
	cout << "Enter y: " << endl;
	cin >> yin;
	while(xin != 0 && yin != 0){
		Point vp(xin, yin);
		vecPoint.push_back(vp);
		cout << "Enter x: " << endl;
		cin >> xin;
		cout << "Enter y: " << endl;
		cin >> yin;
	}

	for(int i = 0; i < vecPoint.size(); i++){ //Print out the points in the vector
		cout << vecPoint[i].getPoint() << endl;
	}

	int index = farthestPoint(vecPoint);
	cout << "the index is: " << index << "\nthe point is: " << vecPoint[index].getPoint() << endl;

	return 0;
}

int farthestPoint(vector<Point>& points){
	Point furthest(0,0); //initialized to the origin
	int index = 0;
	for(int i = 0; i < points.size(); i++){
		double distance = furthest.get_distance();
		Point p = points[i];
		if(p.get_distance() > distance){
			furthest = p;
			index = i;
		}
	}
	return index;
}
*/
