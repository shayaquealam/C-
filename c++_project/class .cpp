/*
 * class .cpp
 *
 *  Created on: 08-Oct-2022
 *      Author: alam
 */
#include <iostream>
using namespace std;
#include "class.h"


void basic :: hello_world()
{
	cout<<"helloworld";
	cout<<"\n";
	return;
}

void basic :: sum_of_two_number()
{
	cout<<"enter two number";
	cin>>a>>b;
	int sum = a+b;
	cout<<"sum of two number = "<<sum;
	cout<<"\n";
	return;
}

void basic :: swap_of_two_number()
{
	cout<<"before swapping ="<<a<<" "<<b;
	cout<<"\n";

	a = a+b;
	b = a-b;
	a = a-b;
	cout<<"after swapping ="<<a<< " "<<b;
	cout<<"\n";
	return;
}

void basic :: name_print()
{
	string name;
	cout<<"enter name\n";
	cin>>name;
	cout<<"name: "<<name;
	cout<<"\n";
	return;
}

void basic :: reverse_number()
{
	uint32_t n,rem;
	uint32_t sum = 0;
	cout<<"please enter a number\n";
	cin>>n;
	while(n!=0)
	{
		rem = n%10;
		sum = (sum*10) + rem;
		n = n/10;
	}

	cout<<"after reverse number : "<<sum;
	cout<<"\n";
	return;
}

void basic :: biggest_two_number()
{
	uint32_t a,b;
	cout<<"please enter two number\n";
	cin>>a>>b;
	if(a>b)
	{
		cout<<"biggest number :"<<a;
	}
	else
	{
		cout<<"biggest number :"<<b;
	}
	cout<<"\n";
	return;
}


void basic :: biggest_three_number()
{
	uint32_t a,b,c;
	cout<<"please enter three number\n";
	cin>>a>>b>>c;

	if(a>b && a>c)
	{
		cout<<"biggest number:"<<a;
	}
	else if(b>c && b>a)
	{
		cout<<"biggest number:"<<b;
	}
	else
	{
		cout<<"biggest number:"<<c;
	}
	cout<<"\n";
	return;
}

void basic :: average_of_n_number()
{
	int n,i,avg=0;

	cout<<"please enter the total number of number";
	cin>>n;

	char arr[n];

	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int sum =0;

	for(i=0;i<n;i++)
	{
		sum = sum + int(arr[i]);
	}

	cout<<"sum :"<<sum;

	avg = sum/n;

	cout<<"average : "<<avg;

	cout<<"\n";

	return;
}

void basic :: simple_interest_calculat()
{
	uint32_t p,r,t;
	cout<<"please enter the principal rate and time";
	cin>>p>>r>>t;
	uint32_t SI;
	SI = (p*r*t)/100;
	cout<<"simple interest ="<<SI;
	return;
}
