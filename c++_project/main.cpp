/*
 * main.cpp
 *
 *  Created on: 16-Sep-2022
 *      Author: alam
 */

#include <iostream>
using namespace std;
#include "basic.h"
#include "pointer.h"
#include "class.h"
#include "array.h"
#include "inheritnce.h"
#include "encaptulation.h"
#include "polymorphism.h"
#include "contructor.h"

uint8_t sum_array[16] = {
		3,2,6,4,5,6,7,8,4,1,2,3,5,3,2,1
};

uint8_t reverse_array[16];

int main()
{
	int i;
//	Basic file call
	/*basic b;
	array a;
	a.array_sum();
	b.hello_world();
	b.sum_of_two_number();
	b.swap_of_two_number();
	b.name_print();
	b.reverse_number();
	b.biggest_two_number();
	b.biggest_three_number();
	b.average_of_n_number();
	b.simple_interest_calculat();*/

//	inheritnce file call
/*	add1 a1;
	a1.add_two_number();
	add2 a2;
	a2.add_three_number();

    Encapsulation obj;

    obj.set(5);

    cout<<"\ngetting number="<<obj.get();

    function_overloading f;

    f.add(3,4);
    f.add(3,4,5);
    f.add(3,4,5,6);
    f.add(3,4,5,6,7);

    base_function_overriding* b_fun;
    derived_function_overriding d_fun;
    b_fun = &d_fun;
    b_fun->print();*/

	//constant variable
//	const int x =5;
//	x=20; // will give a error
//	cout<<x;

	//call by value
//	int a=4,b=5;
//	call_by_value(a,b);

	//call by reference
//	call_by_reference(&a,&b);

//	call_address(a,b);

//	int sum = a + b;
//	cout<<"\nsum after change :"<<sum;

	/*****static************/

/*	for(i=0;i<5;i++)
	{
		static_variable();
	}*/

	/*******const variable******/
/*	for(i=0;i<5;i++)
	{
		constant_variable();
	}*/

	/*****constructor class in c++********/

	sum s;
	s.set_data();
    return 0;
}





