#include <iostream>
using namespace std;

class Date
{
public:
   Date();  // default ctor
   Date(int mm, int dd, int yy);  // alt ctor
   Date(const Date& other);  // copy ctor
   ~Date();  //dtor
   const Date& operator= (const Date& rhs);  // assignment op

   // stream insertion as a friend function
   friend ostream& operator<<(ostream& os, const Date& d);

private:
   int month;
   int day;
   int year;
};
