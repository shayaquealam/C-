/*
 * basic.cpp
 *
 *  Created on: 16-Sep-2022
 *      Author: alam
 */

#include "basic.h"
void sum(int x, int y)
{
	int sum = 0;
	sum = x+y;
	std::cout<<"sum of two number = "<<sum;
}

void sum_of_n_number(uint32_t n)
{
	uint32_t i,sum=0;
	int sum1 = 0;
	for(i=1;i<=n;i++)
	{
		sum = sum + i;
	}
	std::cout<<"sum of "<<n<<" number = "<<sum;

	for(i = 1; i <= 10; ++i)
	{
		sum1 = sum1 + i;
	}

	std::cout<<"\n"<<"another sum = "<<sum1;
}

void call_by_value(int x,int y)
{
	int sum =0;
	sum = x+y;
	cout<<"sum ="<<sum;
}

void call_by_reference(int *x,int *y)
{
	int sum;
	sum = *x + *y;
	cout<<sum;
	return;
}

void call_address(int &x, int &y)
{
	int sum=0;
	sum = x + y;
	cout<<sum<<" ";

	x=10;
	y=20;
	return;
}

void static_variable()
{
   //the scope of static variable will be through out the program, i.e the
   //static variable x will not be 0 when the function will get called
   static int x = 0;
   x++;
   cout<<x<<" ";

	return;
}

void constant_variable()
{
   const int x = 10;

   //for x++ line , compiler will give error
//   x++;
   //x value will not get incremented like static variable,thats why it is
   //constant variable..
   cout<<x<<" ";
   return;
}








