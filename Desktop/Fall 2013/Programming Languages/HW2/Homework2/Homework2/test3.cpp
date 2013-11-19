#include <iostream>
#include <cstdlib>
#include <algorithm>
#include "Date.h"
#include "Reminder.h"
#include "P_Reminder.h"
using namespace std;


const int MAX = 50;

// Dynamically create some sort of Date object and return its pointer via the
// function parameter, and return true.
// Return false if no Date object was created (i.e., the user selected quit)
bool getReminder(Date* &rem);


// Compare two Date objects for the purpose of sorting
bool remCompare(Date *a, Date *b);




int main()
{
  Date *date_list[MAX];
  int in;

  cout << "\nWhen prompted, enter a 'd' for a Date, enter an 'r' for a \n";
  cout << "Reminder, enter a 'p' for a PriorityReminder, or enter a 'q'\n";
  cout << "to quit.\n\n";

  // call getReminder() to get a Date object.
  // the Date object may be a Date, Reminder, or PriorityReminder object.
  for (in = 0; getReminder(date_list[in]) && in < MAX; in++)
  {} // empty loop body
  

  // sort the array of Date objects
  std::sort(date_list, date_list+in, remCompare);
  

  // now print them out in sorted order
  cout << "\n\n\nDates to remember: \n" << endl;
  for (int out = 0; out < in; out++)
    cout << *date_list[out] << endl;
    // the above statement does the right thing if operator<<
    // is defined in terms of a virtual print() method


  // now delete all objects created
  for (int out = 0; out < in; out++)
    delete date_list[out];


  cout << "\n\nPress enter to quit";
  char tmp;
  tmp = cin.get();

  return 0;
}


// Dynamically create some sort of Date object and return its pointer via the
// function parameter, and return true.
// Return false if no Date object was created (i.e., the user selected quit)
bool getReminder(Date* &rem)
{
  static char msgstr[100]; // made static to save recreating them on stack
  static char datestr[50];
  static char ans[10];

  cout << endl;
  cout << "enter d|p|r|q: " << flush;
  cin.getline(ans, sizeof(ans));

  // dynamically create objects based on the type desired

  switch (ans[0]) 
    {

    case 'd':
    case 'D':
      cout << "Enter date (mm/dd/yy): " << flush;
      cin.getline(datestr, sizeof(datestr));
      Date *rem1;
      rem1 = new Date;
      rem1->setDate(datestr);
      rem = rem1;  // copy the pointer
      return true;

    case 'p':
    case 'P':
      cout << "Enter date (mm/dd/yy): " << flush;
      cin.getline(datestr, sizeof(datestr));
      PriorityReminder *rem2;
      rem2 = new PriorityReminder;
      rem2->setDate(datestr);
      cout << "Enter priority reminder message for "
	   << rem2->getDate() << ": " << flush;
      cin.getline(msgstr, sizeof(msgstr));
      if (strlen(msgstr) > 0)
	rem2->setmsg(msgstr);
      rem = rem2;  // copy the pointer
      return true;

    case 'r':
    case 'R':
      cout << "Enter date (mm/dd/yy): " << flush;
      cin.getline(datestr, sizeof(datestr));
      Reminder *rem3;
      rem3 = new Reminder;
      rem3->setDate(datestr);
      cout << "Enter reminder message for "
	   << rem3->getDate() << ": " << flush;
      cin.getline(msgstr, sizeof(msgstr));
      if (strlen(msgstr) > 0)
	rem3->setmsg(msgstr);
      rem = rem3;  // copy the pointer
      return true;

    case 'q':
    case 'Q':
    default: 
      return false;

    }
}


// Compare two Date objects for the purpose of sorting
bool remCompare(Date *a, Date *b)
{

  // Return ordering information on the Date objects by using
  // the overloaded relational operators of the Date class.
  // Impose a "strict weak ordering" (do a web search).

  // Return true if the first object should be sorted before the second,
  // otherwise return false

  if (*a < *b)
    return true;     // sort a ahead of b
  else if (*a > *b)
    return false;    // sort b ahead of a
  else if (*a == *b)
    return false;    // this is "strict" ordering
  else {
    cout << "ERROR IN REMCOMPARE" << endl;
    return 0;
  }
}

