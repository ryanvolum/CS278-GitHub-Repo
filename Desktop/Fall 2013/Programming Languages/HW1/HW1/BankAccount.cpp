#include "BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount()  // default ctor
{
   balance = 0;
   interestRate = 0;
}


BankAccount::BankAccount(const BankAccount& acct) //copy ctor
{
   owner = acct.owner;
   balance = acct.balance;
   interestRate = acct.interestRate;
}


BankAccount::~BankAccount()  //dtor
{
}


const BankAccount& BankAccount::operator= (const BankAccount& rhs)
{
   if (this != &rhs) {
      owner = rhs.owner;
      balance = rhs.balance;
      interestRate = rhs.interestRate;
   }
   return *this;
}


Person& BankAccount::getOwner()
{
   return owner;
}


void BankAccount::setOwner(const Person& newPerson)
{
   owner = newPerson;
}


double BankAccount::getBalance()
{
   return balance;
}


void BankAccount::makeDeposit(double amount)
{
   balance = balance + amount;
}


void BankAccount::makeWithdrawl(double amount)
{
   balance = balance - amount;
}


double BankAccount::getInterestRate()
{
   return interestRate;
}


void BankAccount::setInterestRate(double newInterestRate)
{
   interestRate = newInterestRate;
}

