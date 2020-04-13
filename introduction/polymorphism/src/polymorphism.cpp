//============================================================================
// Name        : polymorphism.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description : Polymorphism in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Enemy // @suppress("Class has a virtual method and non-virtual destructor")
{
	public:
		virtual void attack()
		{}
};

class Ninja: public Enemy // @suppress("Class has a virtual method and non-virtual destructor")
{
	public:
		void attack()
		{
			cout<<"Ninja attack!"<<endl;
		}
};

class Monster: public Enemy // @suppress("Class has a virtual method and non-virtual destructor")
{
	public:
		void attack()
		{
			cout<<"Monster attack!"<<endl;
		}
};

int main()
{
	Ninja n;
	Monster m;
	Enemy *enemy1=&n;
	Enemy *enemy2=&m;
	enemy1->attack();
	enemy2->attack();
	return 0;
}
