#include <iostream>
#include "String.h"

using namespace std;

String::String() {
	String("");
}

String::String(const char* arg) {
	storage = nullptr;
	copy(arg);
}


String::~String() {
	// if (storage != nullptr) delete[] storage;
}

int String::compare(const char* arg) {
	// Check length of both
	if (length(arg) > length()) {
		return -2;
	}
	else if (length(arg) < length()) {
		return -1;
	}
	else {
		int eq = 1;
		for (int i = 0; i < length(); i++) {
			if (storage[i] != arg[i]) {
				eq = 0;
				break;
			}
		}
		return eq;
	}
}

void String::cat(const char arg) {
	int len = length();
	char* copy = new char[len];
	for (int i = 0; i < len; i++) {
		copy[i] = storage[i];
	}
	if (storage != nullptr) delete[] storage;
	storage = new char[len + 2];

	for (int i = 0; i < len; i++) {
		storage[i] = copy[i];
	}

	storage[len] = arg;
	storage[len + 1] = '\0';

	delete[] copy;
}

void String::cat(const char* arg) {
	int preLength = length();
	int newLength = preLength + length(arg);

	char* copy = new char[preLength + 1];
	for (int i = 0; i < preLength; i++) {
		copy[i] = storage[i];
	}

	if (storage != nullptr) delete[] storage;
	storage = new char[newLength + 1];

	for (int i = 0; i < preLength; i++) {
		storage[i] = copy[i];
	}

	delete[] copy;

	for (int i = preLength; i <= newLength; i++) {
		storage[i] = arg[i - preLength];
	}
}

int String::length() {
	return length(storage);
}

int String::length(const char* arg) {
	int i;
	for (i = 0; arg[i] != '\0'; i++);
	return i;
}

char* String::get() {
	return storage;
}
void String::copy(const char arg) {
	int len = length();

	char* copy = new char[len + 1];
	
	for (size_t i = 0; i < len; i++)
	{
		copy[i] = storage[i];
	}
	
	if (storage != nullptr) {
		delete[] storage;
	}

	storage = new char[len + 2];

	for (int i = 0; i < len; i++) {
		storage[i] = copy[i];
	}

	delete[] copy;

	storage[len] = arg;
	storage[len + 1] = '\0';
}
void String::copy(const char* arg) {
	// Deleting if already exits
	if (storage != nullptr) delete[] storage;

	// Calulating length
	int i = length(arg);

	// Dynamically Allocating space for size
	storage = new char[i + 1];

	// Copying the char array to storage
	int j;
	for (j = 0; j <= i; j++) storage[j] = arg[j];
}
String** String::split(const char deli = ' ') {

	// Counting the instancing of Delimeter
	int spCount = 0;
	for (int i = 0; i < length(); i++) {
		if (storage[i] == deli) {
			spCount++;
		}
	}

	// Allocating memory
	String** sections = new String* [spCount];

	// Setting temp variables
	String* sec = new String("");
	int pieces = 0;

	// Looping
	for (int i = 0; i <= length(); i++) {
		if (storage[i] != deli && storage[i] != '\0') {
			sec->copy(storage[i]);
		}
		else {
			sections[pieces] = sec;
			cout << sections[pieces]->get() << endl;
			sec = new String("");
			pieces++;
		}
	}

	return sections;
}

void String::toLowercase() {
	int len = length();
	for (size_t i = 0; i < len; i++)
	{
		if (storage[i] >= 65 && storage[i] <= 90) {
			storage[i] += 32;
		}
	}
}

void String::toUppercase() {
	int len = length();
	for (size_t i = 0; i < len; i++)
	{
		if (storage[i] >= 97 && storage[i] <= 122) {
			storage[i] -= 32;
		}
	}
}