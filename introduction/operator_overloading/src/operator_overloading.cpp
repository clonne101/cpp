//============================================================================
// Name        : operator_overloading.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Operator Overloading in C++, Ansi-style
//============================================================================

#include <iostream>
#include "other.h"
using namespace std;

int main()
{
	other a(34);
	other b(21);
	other c;
	c=a+b;
	cout<<c.num<<endl;
	return 0;
}
