//============================================================================
// Name        : array_calculations.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Array Calculations in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int clonne[5] = {20,54,76,832,546};
	int sum = 0;

	for(int x=0; x<5; x++)
	{
		sum += clonne[x];
		cout << "Sum of each index: " << sum << endl;
	}

	return 0;
}
