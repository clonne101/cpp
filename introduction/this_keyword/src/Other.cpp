/*
 * Other.cpp
 *
 *  Created on: 13 Apr 2020
 *      Author: clonne101
 */

#include <iostream>
#include "Other.h"
using namespace std;

Other::Other(int num):h(num)
{}

void Other::printvar()
{
	cout<<"h="<<h<<endl;
	cout<<"this->h="<<this->h<<endl;
	cout<<"(*this).h="<<(*this).h<<endl;
}

