/*
 * ModuloNCounter.cpp
 *
 *  Created on: 29-Nov-2020
 *      Author: Aditi Prakash
 */
#include <iostream>

using namespace std;

#include "ModuloNCounter.h"

ModuloNCounter::ModuloNCounter(int maxCounterValue)
{
	this->currentCount = 0;
	this->maxCount = maxCounterValue;

}

ModuloNCounter::ModuloNCounter()
{

}

/*!
 * \brief: Function to overload pre-increment operator
 * \details: Operator Overloading
 */
int ModuloNCounter::operator++()
{
	int overflow {};

	if (currentCount == (maxCount - 1))
	{
		//! Overflow has occurred, reset the counter
		currentCount = 0;
		overflow = 1;
	}
	else
	{
		//! No overflow, increment the counter
		currentCount++;
		overflow = 0;
	}
	return overflow;
}

/*!
 * \brief: Function to overload post-increment operator
 */
int ModuloNCounter::operator++(int)
{
	int overflow {};

	if (currentCount == (maxCount - 1))
	{
		currentCount = 0;
		overflow = 1;
	}
	else
	{
		currentCount++;
		overflow = 0;
	}
	return overflow;
}

/*!
 * \brief: Prints the multi digit modulo counter
 * \param: NONE
 * \return: NONE
 */
void ModuloNCounter::printCounter()
{
	//! Switch case to print hexadecimal characters for hex counter
	switch (currentCount)
	{
	case 10:
		cout << "A";
		break;
	case 11:
		cout << "B";
		break;
	case 12:
		cout << "C";
		break;
	case 13:
		cout << "D";
		break;
	case 14:
		cout << "E";
		break;
	case 15:
		cout << "F";
		break;
	default:
		cout << currentCount;
	}
}

ModuloNCounter::~ModuloNCounter()
{
	// TODO Auto-generated destructor stub
}

