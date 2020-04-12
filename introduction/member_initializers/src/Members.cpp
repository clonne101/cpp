/*
 * Members.cpp
 *
 *  Created on: 12 Apr 2020
 *      Author: clonne101
 */

#include "Members.h"
#include <iostream>
using namespace std;

Members::Members(int a, int b) : regVar(a), constVar(b)
{}

void Members::print()
{
	cout << "Regular var is: " << regVar << " ---- Const var is: " << constVar << endl;
}

