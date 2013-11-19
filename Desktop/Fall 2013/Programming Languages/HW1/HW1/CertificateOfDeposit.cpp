#include "CertificateOfDeposit.h"
#include <iostream>
using namespace std;


CertificateOfDeposit::CertificateOfDeposit()  //default ctor
{
}

CertificateOfDeposit::CertificateOfDeposit(const CertificateOfDeposit& CD) : BankAccount(CD)  //copy ctor
{
   maturityDate = CD.maturityDate;
}

CertificateOfDeposit::~CertificateOfDeposit()  //dtor
{
}

const CertificateOfDeposit& CertificateOfDeposit::operator= (const CertificateOfDeposit& rhs)
{
   if (this != &rhs) {
      BankAccount::operator=(rhs);
      maturityDate = rhs.maturityDate;
   }
   return *this;
}


void CertificateOfDeposit::setMaturityDate(const Date& newDate)
{
   maturityDate = newDate;
}

const Date& CertificateOfDeposit::getMaturityDate()
{
   return maturityDate;
}

