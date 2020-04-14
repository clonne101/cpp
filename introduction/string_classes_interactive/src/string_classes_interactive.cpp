//============================================================================
// Name        : string_classes_interactive.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : String Classes Interactive in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1("hampster ");
	string s2;
	string s3;

	s2=s1;
	s3.assign(s1);

	cout<<s1<<s2<<s3<<endl;

	cout<<s1.at(3)<<endl;

	for(int x=0;x<s1.length();x++)
	{
		cout<<s1.at(x);
	}
	cout<<endl;

	// -----------------

	string s4("OMG its a programmer who is programming!");
	cout<<s4.substr(17, 7)<<endl;

	// ------------------

	string one("apples");
	string two("beans");

	cout<<one<<" "<<two<<endl;
	one.swap(two);
	cout<<one<<" "<<two<<endl;

	// ------------------

	string test("ham is spam oh yes I am");
	cout<<test.find("am")<<endl;
	cout<<test.rfind("am")<<endl;

	// ------------------

	string eraser("hi my name is clonne and I love chicken salad!");
	cout<<eraser<<endl;
	eraser.erase(20);
	cout<<eraser<<endl;

	cout<<eraser<<endl;
	eraser.replace(14, 6, "clonne101");
	cout<<eraser<<endl;

	cout<<eraser<<endl;
	eraser.insert(14, "lucky ");
	cout<<eraser<<endl;

}
