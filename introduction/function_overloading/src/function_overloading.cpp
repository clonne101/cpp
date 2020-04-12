//============================================================================
// Name        : function_overloading.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Function Overloading in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void printNumber(float x)
{
	cout << "Printing a float: " << x << endl;
}

void printNumber(int x)
{
	cout << "Printing a integer: " << x << endl;
}

int main()
{
	int a = 54;
	float b = 32.4896;

	printNumber(a);
	printNumber(b);

	return 0;
}
