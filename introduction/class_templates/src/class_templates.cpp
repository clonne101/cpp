//============================================================================
// Name        : class_templates.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Class Templates in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<class T>
class Main
{
	T first, second;
	public:
		Main(T a, T b)
		{
			first=a;
			second=b;
		}
		T bigger();
};

template<class T>
T Main<T>::bigger()
{
	return (first>second?first:second);
}

int main()
{
	Main<int>m(69,105);
	cout<<m.bigger();
}
