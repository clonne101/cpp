//============================================================================
// Name        : size_of_functions.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Size of functions in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	char c;
	cout << sizeof(c) << endl;

	int i;
	cout << sizeof(i) << endl;

	double d;
	cout << sizeof(d) << endl;

	double clonne[10];
	cout << sizeof(clonne) << endl;
	cout << sizeof(clonne) / sizeof(clonne[0]) << endl;

	return 0;
}
