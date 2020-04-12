//============================================================================
// Name        : constructors.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Constructors in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class StringClass
{
	public:
		StringClass(string value)
		{
			setName(value);
		}
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
	StringClass strClass("Jeffery Clonne");
	cout << strClass.getName() << "\n";

	StringClass strClassOther("Jeffery Coder");
	cout << strClassOther.getName();

	return 0;
}
