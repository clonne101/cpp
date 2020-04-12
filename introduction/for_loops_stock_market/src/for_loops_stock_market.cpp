//============================================================================
// Name        : for_loops_stock_market.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : For Loops Stock Market Example in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a;
	float p = 10000;
	float r = .03;

	for(int day = 1; day <= 30; day++)
	{
		a = p * pow(1+r, day);
		cout << day << " ----- " << a << endl;
	}

	return 0;
}
