/*
 * other.cpp
 *
 *  Created on: 13 Apr 2020
 *      Author: clonne101
 */

#include <iostream>
#include "other.h"
using namespace std;

other::other()
{}

other::other(int a)
{
	num=a;
}

other other::operator+(other ao)
{
	other bnew;
	bnew.num=num+ao.num;
	return(bnew);
}

