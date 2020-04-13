//============================================================================
// Name        : files.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Files in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream mainFile;
	mainFile.open("main.txt");

	mainFile<<"I am the main starter\n";
	mainFile.close();
}
