//============================================================================
// Name        : if_statements.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : if statements in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main()
{
	if(5>3){
		cout << "Clonne is AWESOME\n";
	}

	if(1>3){
		cout << "Clonne is not awesome\n";
	}

	if(3>=3){
		cout << "Clonne is greater\n";
	}

	if(3==3){
		cout << "Clonne is equal\n";
	}

	if(8!=9){
		cout << "Clonne is not equal\n";
	}

	int a = 98;
	int b = 76;
	if(a>b) {
		cout << "Clonne is integer greater\n";
	}

	return 0;
}
