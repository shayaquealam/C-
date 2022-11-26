/*
 * pointer.h
 *
 *  Created on: 18-Sep-2022
 *      Author: alam
 */

#ifndef POINTER_H_
#define POINTER_H_

#include <iostream>
using namespace std;
#include <stdlib.h>
/**
 * @brief swap of two number
 */
void swap(int *a, int *b);

/**
 * @brief sum of number in array
 * @param sum
 * @param size
 */
uint32_t array_sum(uint8_t *sum,uint8_t *reverse_array,uint32_t size);

/**
 * @brief Pointer array return
 */
void array_return(uint8_t *arr,int size);

#endif /* POINTER_H_ */
