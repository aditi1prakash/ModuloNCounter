/*
 * ModuloNDigit.cpp
 *
 *  Created on: 29-Nov-2020
 *      Author: Aditi Prakash
 */
#include <iostream>

#include "ModuloNDigit.h"
#include "ModuloNCounter.h"

using namespace std;


ModuloNDigit::ModuloNDigit(int digits, int counterType)
{
	this->digits = digits;
	this->counterType = counterType;

	//! Store number of digits into the structure member
	arr_moduloN = new ModuloNCounter[digits];

	//! Initializing the counters with max value and current value
	for (int i = 0; i < digits; i++)
	{
		arr_moduloN[i] = ModuloNCounter(counterType);
	}

}

ModuloNDigit::ModuloNDigit()
{

}

RC_type ModuloNDigit::initCounter(int digits, int counterType)
{
	if (((counterType != 2) && (counterType != 8) && (counterType) && (counterType != 16)) || ((digits == 0)))
	{
		//Return 0 if the maximum count is invalid or if the number of digits is 0
		return INVALID_TYPE;
	}
	else
	{
		//Return 1 if the parameters are valid
		return VALID_TYPE;
	}
}

/*!
 * \brief Function to overload pre-increment operator
 * \details Operator Overloading
 */
int ModuloNDigit::operator++()
{
	//!Local variable to check the overflow
	unsigned int excess {};

	for (int i = 0; i < digits; i++)
	{
		//!Increment the Multi Digit Counter
		excess = ++arr_moduloN[i];
		if(excess == 0)
		{
			//!Indicates the occurrence of overflow
			return 0;
		}
	}
		return 1;
}

/*!
 * \brief Function to overload post-increment operator
 * \details Operator overloading
 */
int ModuloNDigit::operator++(int)
{
	//!Local variable to check the overflow
	unsigned int excess {};

	for (int i = 0; i < digits; i++)
	{
		//!Increment the Multi digit counter
		excess = ++arr_moduloN[i];
		if(excess == 0)
		{
			//!Overflow, stop increment
			return 0;
		}
	}
		return 1;
}

/*!
 * \brief: Prints the multi digit modulo counter
 * \param: NONE
 * \return: NONE
 */
void ModuloNDigit::printCounter()
{
	for (int i = (digits - 1); i >= 0; i--)
	{
		arr_moduloN[i].printCounter();
	}
}

ModuloNDigit::~ModuloNDigit()
{
	// TODO Auto-generated destructor stub
}


