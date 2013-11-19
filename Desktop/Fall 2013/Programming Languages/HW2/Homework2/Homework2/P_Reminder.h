// CS270 Vanderbilt University
// Prof. Roth

#ifndef P_REMINDER_H
#define P_REMINDER_H

#include "Reminder.h"
#include <string>
using namespace std;

class PriorityReminder : public  Reminder 
{
private:
  // nothing
public:
  PriorityReminder() { }
  PriorityReminder(const Date &d, const char *m = NULL);
  void setmsg(const char *);
  string getmsg(void) const;
  void print(ostream &out = cout) const;
};

ostream& operator << (ostream& os, const PriorityReminder& rem);

#endif
