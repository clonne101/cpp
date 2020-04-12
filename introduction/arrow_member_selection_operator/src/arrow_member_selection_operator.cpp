//============================================================================
// Name        : arrow_member_selection_operator.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Arrow member selection operator in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Member.h"
using namespace std;

int main()
{
	Member member;
	Member *memberPointer = &member;

	member.printValue();
	memberPointer->printValue();

	return 0;
}
