/*
 * lab2.cpp
 *
 *  Created on: 14 Nov 2016
 *      Author: apl115
 */

#include <iostream>
#include <vector>
#include <fstream>
#include "point.hpp"

using namespace std;

int closestPoint(vector<Point>& points);
int numberOfDuplicates(Point p, vector<Point>& points);

int main(){

	ifstream inFile;
	inFile.open("cords.txt");

	vector<Point> vecPoint;
	double xin, yin;
	while(inFile >> xin >> yin){
		Point tmp(xin, yin);
		vecPoint.push_back(tmp);
	}

	for(int i = 0; i < vecPoint.size(); i++){ //Print out the points in the vector
		cout << vecPoint[i].getPoint() << endl;
	}

	int index = closestPoint(vecPoint);
	cout << "the index is: " << index << "\nthe point is: " << vecPoint[index].getPoint() << endl;

	int dup = numberOfDuplicates(vecPoint[index], vecPoint);
	cout << "the number of duplicates of " << vecPoint[index].getPoint() << " is: " << dup << endl;

	return 0;

}

int numberOfDuplicates(Point p, vector<Point>& points){
	int n = 0;
	for(int i = 0; i < points.size(); i++)
	{
		if(p == points[i]){
			n++;
		}
	}
	return n;
}

int closestPoint(vector<Point>& points)
{
	Point furthest = points[0]; //initialized to first point in the vector
	int index = 0;
	for(int i = 1; i < points.size(); i++)
	{
		if(!(furthest < points[i]))
		{
			furthest = points[i];
			index = i;
		}
	}
	return index;
}




