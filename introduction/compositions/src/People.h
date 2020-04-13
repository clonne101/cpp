/*
 * People.h
 *
 *  Created on: 12 Apr 2020
 *      Author: clonne101
 */

#ifndef PEOPLE_H_
#define PEOPLE_H_

#include <string>
#include "Birthday.h"
using namespace std;

class People
{
	public:
		People(string x, Birthday bo);
		void printInfo();
	private:
		string name;
		Birthday dob;
};

#endif /* PEOPLE_H_ */
