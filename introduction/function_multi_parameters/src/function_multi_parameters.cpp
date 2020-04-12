//============================================================================
// Name        : function_multi_parameters.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Function Multi Parameters in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int addNumbers(int x, int y)
{
	int answer = x + y;
	return answer;
}

int main()
{
	cout << addNumbers(10, 10);
	return 0;
}
