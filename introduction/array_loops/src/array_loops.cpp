//============================================================================
// Name        : array_loops.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Array Loops in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int clonne[12];

	cout << "Element - Value" << endl;

	for(int x=0; x<=12; x++)
	{
		clonne[x] = 8*x;

		cout << x << "     -    " << clonne[x] << endl;
	}

	return 0;
}
