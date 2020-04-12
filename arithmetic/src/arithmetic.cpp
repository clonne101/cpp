//============================================================================
// Name        : arithmetic.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Arithmetic in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main()
{
	cout << "Subtraction: ";
	int x = 8 - 4;
	cout << x << "\n\n";

	cout << "Multiplication: ";
	int m = 8 * 4;
	cout << m << "\n\n";

	cout << "Division: ";
	int d = 8 / 4;
	cout << d << "\n\n";

	cout << "Modulo - (Remainder): ";
	int o = 81 % 2;
	cout << o << "\n\n";

	cout << "Associative property (BODMAS): ";
	int p = (4 + 3) * 7;
	cout << p << "\n\n";

	return 0;
}
