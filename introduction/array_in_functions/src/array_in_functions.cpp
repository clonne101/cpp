//============================================================================
// Name        : array_in_functions.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Array in Functions in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void printArr(int arr[], int sizeOfArr);

int main()
{
	int clonne[3] = {20,54,675};
	int junior[6] = {54,24,7,8,9,99};

	printArr(clonne, 3);
	printArr(junior, 6);

	return 0;
}

void printArr(int arr[], int sizeOfArr)
{
	for(int x=0; x<sizeOfArr; x++)
	{
		cout << arr[x] << endl;
	}
}
