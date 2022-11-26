/*
 * inheritnce.cpp
 *
 *  Created on: 09-Oct-2022
 *      Author: alam
 */

#include <iostream>
using namespace std;
#include "inheritnce.h"

void add1 :: add_two_number()
{
	int sum = 0;
	cout<<"enter two number";
	cin>>a>>b;
	sum = a+b;
	cout<<"sum of two number = "<<sum;
	return;
}

void add2 :: add_three_number()
{
	int sum = 0;
	cout<<"enter three number";
	cin>>a>>b>>c;
	sum = a+b+c;
	cout<<"sum of thsree number = "<<sum;
	return;
}


