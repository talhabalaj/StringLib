#include <iostream>
#include "String.h"

using namespace std;

int main() {
	String firstName = "Talha";
	String lastName = "Balaj";
	
	// Getting the string and print
	cout << firstName.get() << " " <<  lastName.get() << endl;

	// Copying another value to String, returns the same object so you can call get() on it.
	cout << firstName.copy("Bilal").get() << endl;
	cout << lastName.copy("Ahmed").get() << endl;
	
	// Concatenation also return the object and supports concatenation
	// with both C-String and this String Lib
	// Means you either pass it
	cout << firstName.cat(" Balaj ").get() << endl;
	// or this
	cout << firstName.cat(lastName).get() << endl;
	// notice you dont have call .get on lastName .cat() 
	// already knows its String Object and calls .get() on it
	cout << "Notice " << lastName.get() << " is printed twice, cuz we concatenated twice, once with C-String and next time with String Class." << endl;

	// Comparsion return -2 when String Object, on which .compare() is called on,
	// has greater length than one in argument and -1 when opposite.
	// Returns 0 if length is same, but string is not same
	// Return 1 when both string are exactly same
	// Supports both C-String and String Class
	firstName.copy("Talha");
	cout << firstName.compare(lastName) << endl;
	cout << firstName.compare("Talha") << endl;

	// Length
	// returns length of String Object (on which it's called) when called with no arguments
	// returns length of String object (which is passed as argument)
	// return length of C-String when passed as an argument
	cout << firstName.length() << endl;
	cout << String::length(lastName) << endl; // prints length of lastName
	cout << String::length("Hello") << endl;

	return 0; 
}