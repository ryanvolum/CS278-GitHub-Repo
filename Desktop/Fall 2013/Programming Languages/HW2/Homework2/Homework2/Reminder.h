// CS270 Vanderbilt University
// Prof. Roth

#ifndef REMINDER_H
#define REMINDER_H

#include "Date.h"
#include <string>
using namespace std;


class Reminder : public  Date
{
private:
  string msg;
public:
  Reminder() {msg = ""; }
  Reminder(const Date &, const char *m = NULL);
  // Reminder(const Reminder &); //default copy ctor is sufficient
  // ~Reminder();  //default dtor is sufficient
  void setmsg(const char *);
  string getmsg(void) const;
  void print(ostream &out = cout) const;
};

ostream& operator << (ostream& os, const Reminder& rem);

#endif
