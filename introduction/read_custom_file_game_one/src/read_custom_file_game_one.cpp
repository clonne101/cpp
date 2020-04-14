//============================================================================
// Name        : read_custom_file_game_one.cpp
// Author      : Jeffery Osei
// Version     :
// Copyright   : Open-Clonne
// Description :  in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;
// func prototypes
int getWhatTheyWant();
void displayItems(int x);
// main func
int main()
{
	int whatTheyWant;
	whatTheyWant=getWhatTheyWant();

	while(whatTheyWant!=4)
	{
		switch(whatTheyWant)
		{
			case 1:
				displayItems(1);
				break;
			case 2:
				displayItems(2);
				break;
			case 3:
				displayItems(3);
				break;
		}
		whatTheyWant=getWhatTheyWant();
	}
}
// get what they want func
int getWhatTheyWant()
{
	int choice;

	cout<<"\n1 - just plain items"<<endl;
	cout<<"2 - helpful items"<<endl;
	cout<<"3 - harmful items"<<endl;
	cout<<"3 - quit program\n"<<endl;

	cin>>choice;
	return choice;
}
// display items func
void displayItems(int x)
{
	ifstream objectsFile("objects.txt");
	string name;
	double power;

	if(x==1)
	{
		while(objectsFile>>name>>power)
		{
			if(power==0)
			{
				cout<<name<<" "<<power<<endl;
			}
		}
	}

	if(x==2)
	{
		while(objectsFile>>name>>power)
		{
			if(power>0)
			{
				cout<<name<<" "<<power<<endl;
			}
		}
	}

	if(x==3)
		{
			while(objectsFile>>name>>power)
			{
				if(power<0)
				{
					cout<<name<<" "<<power<<endl;
				}
			}
		}

}
