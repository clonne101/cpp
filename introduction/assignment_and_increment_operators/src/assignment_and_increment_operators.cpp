//============================================================================
// Name        : assignment_and_increment_operators.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Assignment and Increment Operators in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	x += 10;
	cout << x << endl;

	int s = 10;
	s -= 10;
	cout << s << endl;

	int m = 10;
	m *= 10;
	cout << m << endl;

	int o = 11;
	o %= 10;
	cout << o << endl;

	int p = 20;
	cout << p++ << endl;
	cout << p << endl;

	int i = 20;
	cout << ++i << endl;
	cout << i << endl;

	int pm = 20;
	cout << pm-- << endl;
	cout << pm << endl;

	int im = 20;
	cout << --im << endl;
	cout << im << endl;

	return 0;
}
