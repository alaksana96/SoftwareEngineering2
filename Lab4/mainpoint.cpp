#include <iostream>
#include <vector>
#include <fstream>
#include "point.hpp"
#include "intvector.hpp"

using namespace std;

/*
int main(int argc, char* argv[])
{
	ifstream infile(argv[1]);
	vector<Point> vp;
	vector<Point*> vpt;
	double x,y;
	int i = 0;
	while(infile >> x >> y)
	{
		i++;
		cout << "i: " << i << endl;
		vp.push_back(Point(x, y));
		cout << "vp.capacity(): " << vp.capacity() << endl;
		vpt.push_back(new Point(-x, -y));
		cout << "vpt.capacity(): " << vpt.capacity() << endl;
	}

	for(int j = 0; j < vpt.size(); j++)
	{
		delete vpt[j]; //Deleting the pointers, since they now point to nothing.
	}
	infile.close();
	return 0;
}
*/

/*int main()
{
	intvector iv;
	vector<int> v;
	int i = 0, n;
	cout << "&v: " << &v << endl;

	do
	{
		cin >> n;

		iv.push_back(n);
		v.push_back(n);

		for(int j = 0; j < v.size(); j++)
		{
			cout << "&v[j]:" << &(v.at(j)) << endl; //at() gets the pointer to the element, we dereference to get all the element values
		}

		cout << "iv size: " << iv.size() << endl; //get the size of the vector
		cout << "v size: " << v.size() << endl;

		cout << "iv capacity: " << iv.capacity() << endl; //get the capacity of the vector
		cout << "v capacity: " << v.capacity() << endl;

		cout << "iv[i]: " << iv[i] << endl; //index where the most recent element has been stored
		cout << "v[i]: " << v.at(i) << endl;

		//iv.at(i)++;
		iv[i]++;
		v.at(i)++;

		cout << "iv[i] v.2: " << iv.at(i) << endl; //index where the next element is stored.
		cout << "v[i] v.2: " << v.at(i) << endl;

		i++; //increment index so we pushback to the index from iv.at(i)++
	} while(n!=0);

	return 0;

}*/
