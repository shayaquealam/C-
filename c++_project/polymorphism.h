/*
 * polymorphism.h
 *
 *  Created on: 09-Oct-2022
 *      Author: alam
 */

#ifndef POLYMORPHISM_H_
#define POLYMORPHISM_H_

/* polymorphism means having more than one form.
 * Real life example of polymorphism is a person who at the same time can hava
 * a different characterstics.
 * A man at the same time can be father, husband, son, employee and so on.
 * so this properties is called as the polymorphism.
 */

/*
 * Types of polymorphism:
 * There are two types of polymorphism
 * 1. compile time polyorhism  and 2. Run time polymorphism.
 * Compile time polyorphism : function overloading and operator overloading
 * Run time plyorphism : virtual function
 */

/*
 * function overloading : when there are multiple function with same name but
 * different parameters, then the function said to be overloaded and it is called
 * function overloading .
 */

/*
 * operator overloading :
 */

/*
 * Run time polymorphism :  This type of polyorphism is achieved. late binding
 * and dynamic polymorphism are other names for run time ployorphism.
 * this function call is resolved at runtime in runtime polymorphism.
 */

/**
 * @brief function overloading
 */
class function_overloading
{
public:
	void add(int a, int b);
	void add(int a,int b,int c);
	void add(int a,int b,int c,int d);
	void add(int a,int b,int c,int d,int e);
};

class base_function_overriding
{
public:
	virtual void print();
	void show();
};

class derived_function_overriding : public base_function_overriding
{
public:
	void print();
	void show();
};

#endif /* POLYMORPHISM_H_ */
