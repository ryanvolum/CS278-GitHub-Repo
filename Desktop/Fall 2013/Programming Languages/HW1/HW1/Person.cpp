#include <string>
#include <iostream>
#include "Person.h"
using namespace std;

Person::Person()  //default ctor
{
   name = "Unknown";
}


Person::Person(const Person& p)  //copy ctor
{
   name = p.name;
}


Person::~Person()  //dtor
{
}


const Person& Person::operator= (const Person& rhs)
{
   name = rhs.name;
   return *this;
}


string Person::getName()  //accessor
{
   return name;
}


void Person::setName(string newName)  //mutator
{
   name = newName;
}
