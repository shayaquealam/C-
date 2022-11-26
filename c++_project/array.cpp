/*
 * array.cpp
 *
 *  Created on: 04-Oct-2022
 *      Author: alam
 */

#include <iostream>
using namespace std;

#include "array.h"

void array :: array_sum()
{
	uint8_t arr[10] = {1,2,4,5,3,2,26,7,5,4};

	int i;
	for(i=0;i<10;i++)
	{
		cout<<int(arr[i])<<" ";
	}
	return;
}
