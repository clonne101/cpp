//============================================================================
// Name        : function_templates_multi_params.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Function templates multiple parameterss in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<class First, class Second>
First smaller(First a, Second b)
{
	return (a<b?a:b);
}

int main()
{
	int x=89;
	double y=56.78;
	cout<<smaller(y,x)<<endl;
}
