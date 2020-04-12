//============================================================================
// Name        : print_multi_dimensional_arrays.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Print Multi-Demensional Arrays in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int clonne[2][3] = {{1,2,3}, {7,8,9}};

	for(int row=0; row<2; row++)
	{
		for(int col=0; col<3; col++)
		{
			cout << clonne[row][col] << " ";
		}

		cout << endl;
	}

	return 0;
}
