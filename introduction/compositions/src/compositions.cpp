//============================================================================
// Name        : compositions.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Compositions in C++, Ansi-style
//============================================================================

#include "People.h"
#include <iostream>
#include "Birthday.h"
using namespace std;

int main()
{
	Birthday birthObj(12,28,1986);
	People peopleObj("Clonne", birthObj);

	peopleObj.printInfo();

	return 0;
}
