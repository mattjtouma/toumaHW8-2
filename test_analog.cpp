//
// This program takes no command line arguments.
// Usage is: test_analog
//

#include "AnalogIn.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){

	// Instantiate an AnalogIn object (ADC0, p9.39)
	AnalogIn myReading(0);

	// Get the ADC number of the AnalogIn object
	cout << "ADC number: " << myReading.getNumber() << endl;

	// Read the current ADC value
	cout << "ADC value: " << myReading.readADCsample() << endl;

	// Change ADC number
        //myReading.setNumber(3);

	// Get the new ADC number
        //cout << "ADC number: " << myReading.getNumber() << endl;

}
