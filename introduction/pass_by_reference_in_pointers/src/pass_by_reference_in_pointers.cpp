//============================================================================
// Name        : pass_by_reference_in_pointers.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Pass By Reference in Pointers in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void passByValue(int x);
void passByRef(int *x);

int main()
{
	int varOne = 13;
	int varTwo = 13;

	passByValue(varOne);
	passByRef(&varTwo);

	cout << "Var One is now: " << varOne << endl;
	cout << "Var Two is now: " << varTwo << endl;

	return 0;
}

void passByValue(int x)
{
	x = 99;
}

void passByRef(int *x)
{
	*x=66;
}
