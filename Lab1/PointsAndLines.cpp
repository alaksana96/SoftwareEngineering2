/*
 * 	Write a program which:
 *	❼ Reads from the user a vector of numbers, each representing the parameter
 *	b in the line equation y = b.
 *	❼ Reads from the user (the coordinates of) a point P0.
 *	❼ For each number b, computes the distance between the line y = b and
 *	P0 using the member function distance described above (hint: as for
 *	the declaration of usual variables, you can construct an object locally
 *	to the scope e.g. of a loop), and prints it on the screen.
 */

#include <iostream>
#include <vector>
#include "point.hpp"

using namespace std;

int main(){
	vector<double> vec;
	double val;
	cout << "Enter parameters b: (0 to end)" << endl;
	cin >> val;
	while(val != 0){
		vec.push_back(val);
		cin >> val;
	}

	double x_in, y_in;
	cout << "Enter x: " << endl;
	cin >> x_in;
	cout << "Enter y: " << endl;
	cin >> y_in;
	Point p(x_in, y_in);
	cout << "Your Point: " << p.getPoint() << endl;

	for(int i = 0; i <vec.size(); i++){
		Point line(0, vec[i]);
		cout << "distance: " << line.distance(p) << endl;
	}

	return 0;
}

