//============================================================================
// Name        : classes_and_objects.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Classes and Objects in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class MainClass
{
	// access specifier
	public:
		void lorem()
		{
			cout << "Studying cpp classes and objects" << endl;
		}
};

int main()
{
	MainClass mainClassObject;
	mainClassObject.lorem();
	return 0;
}
