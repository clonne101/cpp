/*
 * Birthday.cpp
 *
 *  Created on: 12 Apr 2020
 *      Author: clonne101
 */

#include "People.h"
#include <iostream>
#include "Birthday.h"
using namespace std;

Birthday::Birthday(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}

void Birthday::printDate()
{
	cout << month << "/" << day << "/" << year << endl;
}

