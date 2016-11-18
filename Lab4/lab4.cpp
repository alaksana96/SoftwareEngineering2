/*
 * lab4.cpp
 *
 *  Created on: 18 Nov 2016
 *      Author: alaksana
 */

#include <iostream>
#include <vector>
#include <fstream>
#include "point.hpp"

using namespace std;

int main(int argc, char* argv[])
{

	{
		ifstream infile(argv[1]);
		vector<Point> vp;
		vector<Point*> vpt;
		double x, y;
		int i = 0;

		while(infile >> x >> y)
		{

/*			Point p(x,y);
			vp.push_back(p); */ //With temporaries: destructor at the end of the while loop scope, after printing capacity and size
/*			vp.push_back(Point(x,y)); //Without Temporaries: destructor immediately called

			cout << "vp.capacity: " << vp.capacity() << endl;
			cout << "vp.size: " << vp.size() << endl;*/

			vpt.push_back(new Point(x, y)); //dynamically allocating memory
			cout << *vpt[i] << " Pointer: " << vpt[i] << " Address of Pointer: " << &vpt[i] << endl; //Destructor not called?
			*vpt[i] = vpt[i]->origin_symmetric(*vpt[i]); //Destructor called because origin_symmetric uses a temporary point.
			cout << *vpt[i] << " Pointer: " << vpt[i] << " Address of Pointer: " << &vpt[i] << endl;
			i++;

		}

		infile.close();

		for(int j = 0; j < vpt.size(); j++)
		{
			delete vpt[j];
		}

	} //once the vector goes out of scope, the pointers are gone, so we can no longer access the Point objects. Therefore, we need to delete them.
	cout << "end of inner scope" << endl;
	return 0;
}


