/*
 * intvector.hpp
 *
 *  Created on: 18 Nov 2016
 *      Author: alaksana
 */
#ifndef INTVECTOR_HPP
#define INTVECTOR_HPP
#include <iostream>

class intvector
{
	public:
		intvector();
		intvector(int size);
		intvector(const intvector& iv);
		~intvector();

		void push_back(int n);
		int& at(int i);
		int& operator[](int i);
		const int& operator[](int i) const;
		int size() const;
		int capacity() const;
		void print_first(const intvector& v);
	private:
		int* v;
		int d_size;
		int d_capacity;
};
#endif






