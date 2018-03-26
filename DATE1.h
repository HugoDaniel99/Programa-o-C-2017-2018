
#ifndef DATE1_H
#define DATE1_H
#include<iostream>
using namespace std;

class CDate {
public:
		CDate(int = 1, int = 1, int = 1970); // constructor
		~CDate(); //destructor
		void print() const; // print date in day/month/year format
		void setDate(int, int, int);
		bool operator== (const CDate& rhs);
		friend ostream& operator<< (ostream& os , CDate &d);
		//friend CDate& operator++();
private:
		int month; // 1-12
		int day; // 1-31 based on month
		int year; // any year
		int checkDay(); //utility function to test day for month/year
}; // end class CDate

#endif
