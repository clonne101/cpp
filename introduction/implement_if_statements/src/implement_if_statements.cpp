//============================================================================
// Name        : implement_if_statements.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Implement If Statements in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int y = 45;

	if(x==10)
	{
		cout << "X is greater than 10" << endl;
	}

	if(x<87)
	{
		cout << "X is less than 87" << endl;
	}

	if(x>=y)
	{
		cout << "X is greater or equal to Y" << endl;
	}

	return 0;
}
