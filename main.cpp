// Standard (system) header files
#include <iostream>
#include <stdlib.h>
#include <cmath>
// Add more standard header files as required
// #include <string>

using namespace std;

#include "ModuloNDigit.h"
#include "ModuloNCounter.h"

// Main program
int main (void)
{
	//!Variable declarations
	int digitsInput {},	typeOfCounter {}, loopCount {};

	//!Gather the inputs of counter parameters from the user
	cout << "Please enter the parameters of your counter:"<< endl;

//	cout << "Number of digits:" << endl;
//	cin >> digitsInput;
//
//	cout << "Type of the counter" << endl;
//	cin >> typeOfCounter;

	digitsInput = 2;
	typeOfCounter = 2;

	ModuloNDigit obj1;

	RC_type validity = obj1.initCounter(digitsInput, typeOfCounter);

	if (INVALID_TYPE == validity)
	{
		cout << "Invalid inputs - End of test" << endl;
	}

	//! Loop variable for printing the counter
	loopCount = pow (typeOfCounter, digitsInput);

	for (int i = 0; i < loopCount; i++)
	{
		obj1.printCounter();
		obj1++;						//or ++obj1;
		cout << " ";
	}


	return 0;
}
