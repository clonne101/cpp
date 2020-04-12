//============================================================================
// Name        : pointers.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Pointers in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int game = 5;
	cout << &game << endl;

	int *gamePointer;

	gamePointer = &game;

	cout << gamePointer << endl;

	return 0;
}
