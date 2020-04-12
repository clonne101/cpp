//============================================================================
// Name        : logical_operators.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Logical Operators in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int age = 23;
	int money = 650;

	if(age > 21 && money > 800)
	{
		cout << "You are allowed into VVIP section" << endl;
	}

	if(age > 21 || money > 500)
	{
		cout << "You are allowed into the regular section" << endl;
	}

	return 0;
}
