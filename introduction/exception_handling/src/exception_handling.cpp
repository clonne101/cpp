//============================================================================
// Name        : exception_handling.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Exception Handling in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	try
	{
		int m=30;
		int s=34;

		if(s>m)
		{
			throw 99;
		}
	}
	catch(int x)
	{
		cout<<"son cannot be older than mom, ERROR NUM: "<<x<<endl;
	}
}
