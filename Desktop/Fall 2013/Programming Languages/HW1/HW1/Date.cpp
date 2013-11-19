#include "Date.h"
#include <iostream>
#include <iomanip>
using namespace std;

Date::Date()  // default ctor
{
   month = 1;
   day = 1;
   year = 2000;
}

Date::Date(int mm, int dd, int yy)  // alt ctor
{
   month = mm;
   day = dd;
   year = yy;
}

Date::Date(const Date& other)  // copy ctor
{
   month = other.month;
   day = other.day;
   year = other.year;
}


Date::~Date()  //dtor
{
}


const Date& Date::operator= (const Date& rhs)  // assignment op
{
   if (this != &rhs) {
      month = rhs.month;
      day = rhs.day;
      year = rhs.year;
   }
   return *this;
}


// Friend operator
ostream & operator << (ostream &out, const Date & d)
{

  out << setw(2) << setfill('0') << d.month << '/';
  out << setw(2) << setfill('0') << d.day << '/';
  out << setw(2) << setfill('0') << d.year;

  return out;
}
