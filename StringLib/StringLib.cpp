#include <iostream>
#include "String.h"

using namespace std;

int main() {
	String name("TALHA BALAJ");
	String** sections = name.split(' ');

	return 0;
}