/*
 * basic.h
 *
 *  Created on: 16-Sep-2022
 *      Author: alam
 */

#ifndef BASIC_H_
#define BASIC_H_

#include <iostream>
using namespace std;

/**
 * @brief sum of two number
 */
void sum(int a, int b);

/**
 * sum of n number
 */
void sum_of_n_number(uint32_t n);

/**
 * call by value
 */
void call_by_value(int x, int y);

/**
 * @brief call by reference
 */
void call_by_reference(int *x,int *y);

void call_address(int &x,int &y);

/**
 * @brief static variable
 */
void static_variable();

void constant_variable();

#endif /* BASIC_H_ */
