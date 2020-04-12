//============================================================================
// Name        : math_with_pointers.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Math With Pointers in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int clonne[5];
	int *cn0 = &clonne[0];
	int *cn1 = &clonne[1];
	int *cn2 = &clonne[2];

	cout << "cn0 is at memory address: " << cn0 << endl;
	cout << "cn1 is at memory address: " << cn1 << endl;
	cout << "cn2 is at memory address: " << cn2 << endl;

	cn0 += 2;
	cout << "cn0 is now at memory address: " << cn0 << endl;

	return 0;
}
