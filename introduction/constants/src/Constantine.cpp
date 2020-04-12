/*
 * Constantine.cpp
 *
 *  Created on: 12 Apr 2020
 *      Author: clonne101
 */

#include "Constantine.h"
#include <iostream>
using namespace std;

Constantine::Constantine()
{}

void Constantine::printValue()
{
	cout << "I am a regular function" << endl;
}

void Constantine::printValueOther() const
{
	cout << "I am a constant function" << endl;
}

