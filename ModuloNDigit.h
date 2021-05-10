/*
 * ModuloNDigit.h
 *
 *  Created on: 29-Nov-2020
 *      Author: Aditi Prakash
 */

#ifndef MODULONDIGIT_H_
#define MODULONDIGIT_H_

#include "ModuloNCounter.h"

typedef enum{
	INVALID_TYPE,
	VALID_TYPE
}RC_type;

class ModuloNDigit
{
private:
	//! Represents the number of digits in the counter
	int digits;
	//! Represents the type of the counter (b/o/d/h)(Redundant)
	unsigned int counterType;

	//! Array pointer to the class ModuloNCounter
	ModuloNCounter *arr_moduloN;

public:

	//! User defined constructor
	ModuloNDigit(int digits, int counterType);

	//!Default constructor
	ModuloNDigit ();

	/*!
	 * \brief: Function to initialise the parameters
	 * \param [IN]: digits - Number of digits in the counter
	 * \param [IN]: counterType - Type of the counter (b/o/d/h)
	 * \return: Returns the validity of type and digits
	 */
	RC_type initCounter (int digits, int counterType);


	/*!
	 * \brief: Function to overload pre-increment operator
	 * \details: Operator Overloading
	 */
	int operator++ ();

	/*!
	 * \brief: Function to overload post-increment operator
	 */
	int operator++ (int);

	/*!
	 * \brief: Prints the multi digit modulo counter
	 * \param: NONE
	 * \return: NONE
	 */
	void printCounter ();

	//!Destructor
	~ModuloNDigit();
};

#endif /* MODULONDIGIT_H_ */
