//============================================================================
// Name        : string_classes.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : String Classes in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class StringClass
{
	public:
		void setName(string value)
		{
			name = value;
		}
		string getName()
		{
			return name;
		}
	private:
			string name;

};

int main()
{
	StringClass strClass;
	strClass.setName("Jeffery Osei");
	cout << strClass.getName();
	return 0;
}
