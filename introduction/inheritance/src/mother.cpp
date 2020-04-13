/*
 * mother.cpp
 *
 *  Created on: 13 Apr 2020
 *      Author: clonne101
 */

#include "mother.h"
#include "son.h"
#include <iostream>
using namespace std;

mother::mother() // @suppress("Class members should be properly initialized")
{
	cout<<"I am the mother constructor!"<<endl;
}

mother::~mother()
{
	cout<<"I am the mother deconstructor!"<<endl;
}

void mother::sayname()
{
	cout<<"I am a mother!"<<endl;
}

