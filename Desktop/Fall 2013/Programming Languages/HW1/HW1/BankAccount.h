#include "Person.h"
using namespace std;

class BankAccount
{
public:
   BankAccount();  // default ctor
   BankAccount(const BankAccount& acct); //copy ctor
   ~BankAccount();  //dtor
   const BankAccount& operator= (const BankAccount& rhs); 

   Person& getOwner();
   void setOwner(const Person& newPerson);
   double getBalance();
   void makeDeposit(double amount);
   void makeWithdrawl(double amount);
   double getInterestRate();
   void setInterestRate(double newInterestRate);

private:
   Person owner;
   double balance;
   double interestRate;

};
