/*
 * encaptulation.cpp
 *
 *  Created on: 09-Oct-2022
 *      Author: alam
 */

// c++ program to explain
// Encapsulation

#include<iostream>
using namespace std;
#include "encaptulation.h"

/*encapsulation is nothing but wrapping of data and member function or binding
 * data and member function inside a single class*/

void Encapsulation :: set(int a)
{
	x = a;
}

int Encapsulation :: get()
{
	return x;
}


