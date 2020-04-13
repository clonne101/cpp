//============================================================================
// Name        : friend_of_classes.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Friend of classes in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class myclass
{
	public:
		myclass() {myvar=0;}
	private:
		int myvar;

	friend void myfunc(myclass &sfo);
};

void myfunc(myclass &sfo)
{
	sfo.myvar=99;
	cout<<sfo.myvar<<endl;
}

int main()
{
	myclass obj;
	myfunc(obj);
	return 0;
}
