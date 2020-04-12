//============================================================================
// Name        : if_else_statements.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : If Else Statement in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int age = 178;

	if(age>60)
	{
		if(age>100)
		{
			cout << "You are the oldest" << endl;
		}
	}
	else
	{
		cout << "You are young" << endl;
	}

	return 0;
}
