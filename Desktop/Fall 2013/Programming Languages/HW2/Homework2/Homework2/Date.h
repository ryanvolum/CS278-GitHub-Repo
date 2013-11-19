// CS270 Vanderbilt University
// Prof. Roth

#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
using namespace std;


class Date 
{
private:
    int day;
    int month;
    int year;
    static int days[13];               // how many days in each month with 1-based indexing

public:

    // constructors
    Date();    // default ctor sets Date to today
    Date(const int m, const int d, const int y);
    Date(const string& dateStr);
	Date(const char* dateCStr);

    // mutators
    void setDate(const Date &);
    void setDate(const int m, const int d, const int y);
    void setDate(const string& dateStr);
	void setDate(const char* cstr);
	void incrementDay();
	void decrementDay();
	void incrementMonth();
	void decrementMonth();
	void incrementYear();
	void decrementYear();

    // accessors
    string getDate() const;
	int getMonth() const;
	int getDay() const;
	int getYear() const;
	string toString() const;

    // output functions
    void display() const;
    virtual void print(ostream &os = cout) const;

    // logical methods
    bool equals (const Date & d) const;
    bool lessthan (const Date & d) const;


    // overloaded operators ======================

    // assignment operators
    const Date & operator+= (int add);
    const Date & operator-= (int sub);

    // arithmetic operators
    Date operator+ (int add) const;       // add days to a date
    Date operator- (int sub) const;       // subtract days from a date
    int operator- (const Date &d) const;  // find difference between two dates
    Date& operator++();                   // pre increment
    Date operator++(int);                 // post increment
    Date& operator--();                   // pre decrement
    Date operator--(int);                 // post decrement


    // stream insertion as a friend function
    friend ostream &operator <<(ostream &os, const Date &d);
};


////// FREE FUNCTIONS DEFINED HERE, AFTER THE CLASS



#endif
