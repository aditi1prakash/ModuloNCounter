/*
 * ModuloNCounter.h
 *
 *  Created on: 29-Nov-2020
 *      Author: Aditi Prakash
 */

#ifndef MODULONCOUNTER_H_
#define MODULONCOUNTER_H_

class ModuloNCounter
{
	private:
	//! Holds the current count of the counter
	unsigned int currentCount;
	//! Holds the maximum count of the modulo N counter
	unsigned int maxCount;

public:
	//! User defined constructor
	ModuloNCounter(int maxCounterValue);

	ModuloNCounter();

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

	~ModuloNCounter();
};

#endif /* MODULONCOUNTER_H_ */
