//============================================================================
// Name        : switch_statements.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Switch Statements in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{

	int age;

	cout << "How old are you?" << endl;
	cin >> age;

	switch(age)
	{
		case 16:
			cout << "You can drive now" << endl;
			break;
		case 18:
			cout << "Go buy some coffee" << endl;
			break;
		case 21:
			cout << "Go buy some beer" << endl;
			break;
		default:
			cout << "Sorry, you get nothing" << endl;
	}

	return 0;
}
