/*
 * inheritnce.h
 *
 *  Created on: 09-Oct-2022
 *      Author: alam
 */

#ifndef INHERITNCE_H_
#define INHERITNCE_H_

#include <stdlib.h>
#include <stdint.h>
#include <string.h>

class add1
{
public:
	int a,b,c;
	void add_two_number();
};

class add2 : public add1
{
public:
	void add_three_number();
};

#endif /* INHERITNCE_H_ */
