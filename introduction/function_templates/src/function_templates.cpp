//============================================================================
// Name        : function_templates.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Function Templates in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<class generic>
generic add(generic a, generic b)
{
	return a+b;
}

int main()
{
	int x=7,y=43,z;
	z=add(x,y);
	cout<<z<<endl;
}
