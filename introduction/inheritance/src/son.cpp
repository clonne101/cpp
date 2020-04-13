/*
 * son.cpp
 *
 *  Created on: 13 Apr 2020
 *      Author: clonne101
 */

#include "mother.h"
#include "son.h"
#include <iostream>
using namespace std;

son::son()
{
	cout<<"I am the son constructor!"<<endl;
}

son::~son()
{
	cout<<"I am the son deconstructor!"<<endl;
}

void son::doSomething()
{
	publicv=1;
	protectedv=2;

	cout<<"public: "<<publicv<<endl;
	cout<<"protected: "<<protectedv<<endl;
}

