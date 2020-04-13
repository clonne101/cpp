//============================================================================
// Name        : exception_handling_interactive.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Exception Handling Interactive in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	try
	{
		int num1;
		cout<<"Enter first number: "<<endl;
		cin>>num1;

		int num2;
		cout<<"Enter second number: "<<endl;
		cin>>num2;

		if(num2==0)
		{
			throw 0;
		}

		cout<<num1/num2<<endl;
	}
	catch(...)
	{
		cout<<"You cannot divide by 0"<<endl;
	}
}
