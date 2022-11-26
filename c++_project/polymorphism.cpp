/*
 * polymorphism.cpp
 *
 *  Created on: 09-Oct-2022
 *      Author: alam
 */

#include <iostream>
using namespace std;

#include "polymorphism.h"
void function_overloading :: add(int a,int b)
{
	int sum = 0;
	sum = a+b;
	cout<<"sum of two number = "<<sum;
	cout<<"\n";
	return;
}

void function_overloading :: add(int a,int b,int c)
{
	int sum = 0;
	sum = a+b+c;
	cout<<"sum of three number = "<<sum;
	cout<<"\n";
	return;
}


void function_overloading :: add(int a,int b,int c,int d)
{
	int sum = 0;
	sum = a+b+c+d;
	cout<<"sum of four number = "<<sum;
	cout<<"\n";
	return;
}

void function_overloading :: add(int a,int b,int c,int d,int e)
{
	int sum = 0;
	sum = a+b+c+d+e;
	cout<<"sum of three number = "<<sum;
	cout<<"\n";
	return;
}


/*class base_function_overriding
{
public:
	virtual void print()
	{
		cout<<"print base class\n";
		return;
	}
	void show()
	{
		cout<<"show base class\n";
		return;
	}
};

class derived_function_overriding : public base_function_overriding
{
public:
	void print()
	{
		cout<<"print derived class\n";
		return;
	}
	void show()
	{
		cout<<"show derived class\n";
		return;
	}
};*/






