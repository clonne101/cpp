/*
 * Birthday.h
 *
 *  Created on: 12 Apr 2020
 *      Author: clonne101
 */

#ifndef BIRTHDAY_H_
#define BIRTHDAY_H_

class Birthday
{
	public:
		Birthday(int m, int d, int y);
		void printDate();
	private:
		int month;
		int day;
		int year;
};

#endif /* BIRTHDAY_H_ */
