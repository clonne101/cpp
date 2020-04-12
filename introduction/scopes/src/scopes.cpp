//============================================================================
// Name        : scopes.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Scopes in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int test = 20;

int main()
{
	double test = 60;
	cout << ::test << endl;
	return 0;
}
