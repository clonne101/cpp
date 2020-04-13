//============================================================================
// Name        : template_specialisation.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Template Specialsation in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<class T>
class Main
{
	public:
		Main(T x)
		{
			cout<<x<<" is not a character!"<<endl;
		}
};

template<>
class Main<char>
{
	public:
		Main(char x)
		{
			cout<<x<<" is indeed a character!"<<endl;
		}
};

int main()
{
	Main<int> obj1(7);
	Main<double> obj2(3.154);
	Main<char> obj3('q');
}
