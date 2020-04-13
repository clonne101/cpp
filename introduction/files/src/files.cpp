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

	ofstream otherFile("other.txt");
	if(otherFile.is_open())
	{
		cout<<"ok the other file is open"<<endl;
	}
	else
	{
		cout<<"file is not open yet"<<endl;
	}
	otherFile<<"I am the other file\n";
	otherFile.close();

}
