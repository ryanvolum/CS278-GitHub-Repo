// CS270 Vanderbilt University
// Prof. Roth

#ifndef REMINDER_CPP
#define REMINDER_CPP

#include "Reminder.h"
#include <string>
using namespace std;


Reminder::Reminder(const Date &d, const char *m) : Date(d)
{
  msg.assign(m);
}


//Reminder::Reminder(const Reminder &r) {} //default copy ctor is sufficient

//Reminder::~Reminder() {}  //default dtor is sufficient

void Reminder::setmsg(const char *msgstr)
{
   if (msgstr) {
     msg.assign(msgstr);
   } else {
     msg.clear();
   }
}

string Reminder::getmsg(void) const
{
  if (!msg.empty())
    return msg;
  else
    return "No Message";
}

void Reminder::print(ostream &out) const
{
  out << "On " << getDate() << ": " << getmsg();
}

ostream& operator << (ostream& os, const Reminder& rem)
{
  rem.print(os);
  return os;
}




#endif
