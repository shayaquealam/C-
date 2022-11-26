/*
 * constructor.cpp
 *
 *  Created on: 30-Oct-2022
 *      Author: alam
 */
#include <iostream>
using namespace std;
#include "contructor.h"

void sum :: set_data(int x, int y)
{
	a = x;
	b = y;
}
void sum :: sum()
{
	int add = 0;
	add = a + b;
	cout<<"add : "<<add;
}


