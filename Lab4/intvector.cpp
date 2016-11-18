/*
 * intvector.cpp
 *
 *  Created on: 18 Nov 2016
 *      Author: alaksana
 */

#include "intvector.hpp"

using namespace std;

intvector::intvector()
{
	v = new int[1];
	d_size = 0;
	d_capacity = 1;
}

intvector::intvector(int size)
{
	d_size = size;
	d_capacity = d_size;
	v = new int[d_capacity];
	for(int i = 0; i < d_size; i++)
	{
		v[i] = 0;
	}
}

intvector::intvector(const intvector& iv)
{
	v = new int[iv.d_size]; //new memory allocated
	for(int i = 0; i < iv.d_size; i++)
	{
		v[i] = iv[i]; //data copied from iv to the current object, in newly allocated memory: deep copy.
	}
	d_size = iv.d_size;
	d_capacity = iv.d_capacity; //Parameter needs to be passed by const reference (it can’t be
	//by value, why?).
}

void intvector::push_back(int n)
{
	if(d_capacity == d_size)
	{
		d_capacity = 2*d_capacity; //doubling the capacity?
		int* tmpv = new int[d_capacity]; // lets move boys
		for(int i = 0; i < d_size; i++)
		{
			tmpv[i] = v[i];
		}
		delete[] v; //no longer pointing to anywhere, so get rid of this array
/*		“Reallocations invalidate all previously obtained iterators,
		references and pointers.”*/

		v = tmpv; //point to newly allocated memory of larger size
	}
	v[d_size] = n; //add newest element to end of array
	d_size++; //increment size
}

int& intvector::at(int i)
{
	return v[i];
}

int& intvector::operator[](int i)
{
	return v[i];
}

const int& intvector::operator[](int i) const
{
	return v[i];
}

int intvector::size() const
{
	return d_size;
}

int intvector::capacity() const
{
	return d_capacity;
}

intvector::~intvector()
{
	delete[] v;
}

void intvector::print_first(const intvector& v)
{
	cout << v[0] << endl;
}
