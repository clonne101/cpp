/*
 * People.cpp
 *
 *  Created on: 12 Apr 2020
 *      Author: clonne101
 */

#include "People.h"
#include <iostream>
#include "Birthday.h"
using namespace std;

People::People(string x, Birthday bo) : name(x), dob(bo)
{}

void People::printInfo()
{
	cout << name << " was born on ";
	dob.printDate();
}

