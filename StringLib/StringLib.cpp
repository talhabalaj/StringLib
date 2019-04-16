#include <iostream>
#include "String.h"

using namespace std;

int main() {
	String s1, s2;
	cout << "Enter String 1:";
	cin >> s1;
	cout << "Enter String 2:";
	cin >> s2;
	String s3 = s1 + s2;
	cout << s3;
	return 0; 
}