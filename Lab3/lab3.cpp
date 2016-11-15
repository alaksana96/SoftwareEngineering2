/*
 * lab3.cpp
 *
 *  Created on: Nov 14, 2016
 *      Author: LaksanaAufar
 */

#include <iostream>
#include <vector>
#include <fstream>
#include "point.hpp"

int member_point_unordsearch(Point p, vector<Point>& points);
int member_point_binsearch(Point p, vector<Point>& points);
int member_point(Point p, vector<Point>& points, bool ordered);
void pointdup(vector<Point>& points1, vector<Point>& points2, vector<Point>& pointOut, bool ordered = false);

using namespace std;

int main()
{
	ifstream inFile;
	inFile.open("cords.txt");
	vector<Point> vecPoint;
	double xin, yin;
	while(inFile >> xin >> yin)
	{
		Point tmp(xin,yin);
		vecPoint.push_back(tmp);
	}

	//Testing member_point_unordsearch
	Point testPoint1(30,-20);
	int test1 = member_point_unordsearch(testPoint1, vecPoint);
	cout << "(30,-20) is not in the vector so we print out the size of the vector: " << test1 << endl;
	testPoint1.set(4,5);
	int test2 = member_point_unordsearch(testPoint1, vecPoint);
	cout << "(4,5) is in the vector, index: " << test2 << endl;

	ifstream inFile1;
	inFile1.open("cordsordered.txt");
	vector<Point> vecPointOrd;
	while(inFile1 >> xin >> yin)
	{
		Point tmp(xin, yin);
		vecPointOrd.push_back(tmp);
	}

	//Testing mem_point_binsearch
	Point testPoint2(30,-20);
	int test3 = member_point_binsearch(testPoint2, vecPointOrd);
	cout << "(30, -20) is not in the vector so we print out the size of the vector: " << test3 << endl;
	int test4 = member_point_binsearch(testPoint1, vecPointOrd);
	cout << "(4,5) is in the vector, index: " << test4 << endl;


	//Testing pointdup
	ofstream outfile;
	outfile.open("vecDup.txt");

	vector<Point> vecDup;
	pointdup(vecPoint, vecPointOrd, vecDup, true);
	for(int i = 0; i < vecDup.size(); i++)
	{
		outfile << vecDup[i] << endl;
	}
	return 0;
}

int member_point_unordsearch(Point p, vector<Point>& points)
{
	for(int i = 0; i < points.size(); i++)
	{
		if(points[i] == p)
		{
			return i;
		}
	}
	return points.size();
}

int member_point_binsearch(Point p, vector<Point>& points)
{
	int L = 0,
		R = points.size() - 1,
		m;
	while(L <= R)
	{
		m = (L + R)/2;
		if(points[m] == p)
		{
			return m;
		}
		else if(points[m] < p)
		{
			cout << "Higher " << m << endl;
			L = m + 1;
		}
		else
		{
			cout << "Lower " << m << endl;
			R = m - 1;
		}
	}
	return points.size();
}

int member_point(Point p, vector<Point>& points, bool ordered)
{
	if(ordered)
	{
		return member_point_binsearch(p, points);
	}
	else
	{
		return member_point_unordsearch(p, points);
	}
}

void pointdup(vector<Point>& points1, vector<Point>& points2, vector<Point>& pointOut, bool ordered)
{
	for(int i = 0; i < points1.size(); i++)
	{
		if(member_point(points1[i], points2, ordered) != points2.size())
		{
			pointOut.push_back(points1[i]);
		}
	}
}
