/*
 * lab3.cpp
 *
 *  Created on: Nov 14, 2016
 *      Author: LaksanaAufar
 */

#include <iostream>
#include "point.hpp"

using namespace std;

//int main(){
//	int* a; //pointer
//	int v_a;
//	a = &v_a; //address of v_a is assigned to a
//
//	*a = 10; //value accessed with dereferencing
//	cout << *a << endl; //value
//	cout << a << endl; //memory address
//
//	a = new int;
//	*a = 15;
//	cout << *a << endl;
//
//	return 0;
//}

/*
int main(){
	Point* p1 = new Point(0,0);
	Point* p2 = new Point(1,2);

	cout << p1->get_x() << " " << p1->get_y() << endl;
	cout << p1 << endl; //address
	cout << p2->get_x() << " " << p1->get_y() << endl;
	cout << p2 << endl; //address
	return 0;
}
*/

//int* square(int n)
//{
//	int square_n = n*n; //Doesnt work because local variable?
//	return &square_n;
//}

/*int* square(int n)
{
	int* square_n = new int;
	*square_n = n*n;
	return square_n;
}


int main()
{
	int n = 10;
	cout << *square(n) << endl;
	return 0;

	int n;
	int *sq;
	while(1)
	{
		cin >> n;
		sq = square(n);
		cout << *sq << endl;
		delete sq; //Beware of Memory Leaks
	}
}*/

/*
int main()
{
	Point p1(1,5);
	cout << *p1.get_xp() << endl; //Works
	double* change_x = p1.get_xp(); //address of x of p1
	*change_x = 20;
	cout << *p1.get_xp() << endl;
	*(p1.get_xp()) = 25;
	cout << *p1.get_xp() << endl;

	return 0;
}

*/

