//============================================================================
// Name        : constants.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Constants in C++, Ansi-style
//============================================================================

#include "Constantine.h"
#include <iostream>
using namespace std;

int main()
{
	Constantine constantine;
	constantine.printValue();

	const Constantine constObj;
	constObj.printValueOther();

	return 0;
}
