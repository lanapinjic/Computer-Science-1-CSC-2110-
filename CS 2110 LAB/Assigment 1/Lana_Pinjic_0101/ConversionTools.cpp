#include <iostream>
#include "ConversionTools.h"
using namespace std;


int main(float f, float c) {

	
	cout << "Conversion App!\n";
	cout << "-------------------\n";
	cout << "Conversion F to C\n";
	cout << "Enter degrees F: ";
	cin >> f;
	cout << "C = ";
	cout << ftoc(f) << endl;
	cout << "\n";


	cout << "Conversion C to F\n";
	cout << "Enter degrees C: ";
	cin >> c;
	cout << "F = ";
	cout << ctof(c) << endl;
};


float ftoc(float f) {
	float C = ((f - 32) * 5/9);
	return C;
}

float ctof(float c) {
	float F = ((c * 1.8) + 32);
	return F;
}




