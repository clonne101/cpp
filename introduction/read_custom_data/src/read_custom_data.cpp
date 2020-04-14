//============================================================================
// Name        : read_custom_data.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Read Custom Data in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream theFile("players.txt");

	int id;
	string name;
	double money;

	while(theFile>>id>>name>>money)
	{
		cout<<id<<","<<name<<","<<money<<endl;
	}
}
