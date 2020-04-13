//============================================================================
// Name        : inheritance.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Inheritance in C++, Ansi-style
//============================================================================

#include "mother.h"
#include "son.h"
#include <iostream>
using namespace std;

int main()
{
	mother m;
	m.sayname();

	son s;
	s.sayname();
	s.doSomething();
	return 0;
}
