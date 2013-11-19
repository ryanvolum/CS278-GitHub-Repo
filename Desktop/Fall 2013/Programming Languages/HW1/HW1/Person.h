#include <string>
using namespace std;

class Person
{
public:
   Person();  //default ctor
   Person(const Person& p);  //copy ctor
   ~Person();  //dtor
   const Person& operator= (const Person& rhs);

   string getName();  //accessor
   void setName(string newName);  //mutator

private:
   string name;
   // normally, we would also keep track of all sorts of
   // other information such as address, date of birth, SSN, etc.
};
