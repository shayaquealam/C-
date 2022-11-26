/*
 * pointer.cpp
 *
 *  Created on: 18-Sep-2022
 *      Author: alam
 */
#include "pointer.h"

void swap(int *a, int *b)
{
	int x;
	x = *a;
	*a=*b;
	*b = x;
}

uint32_t array_sum(uint8_t *sum,uint8_t *reverse_array,uint32_t size)
{
	uint32_t i;
	uint32_t total_sum = 0;
	for(i=0;i<size;i++)
	{
		total_sum += sum[i];
		reverse_array[i] = sum[15-i];
	}
	return total_sum;
}

void array_return(uint8_t *arr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		cout<<*(arr+i)<<" ";
	}

	arr[i] = arr[i] + 1;
}


class  add
{
public:
	int a,b;
	void sum_of_two_number()
	{
		cout<<"enter two number";
		cin>>a>>b;
		int sum = a+b;
		cout<<"sum of two number = "<<sum;
	}
};





