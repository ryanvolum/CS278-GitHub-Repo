#include <iostream>
#include "CertificateOfDeposit.h"
using namespace std;


void formattedReport(CertificateOfDeposit cd);


int main()
{

   cout << "Creating a CD." << endl;

   CertificateOfDeposit myCD;

   cout << "\n\nInitial CD information::" << endl;
   cout << "Owner: " << myCD.getOwner().getName() << endl;
   cout << "Balance: " << myCD.getBalance() << endl;
   cout << "Int Rate: " << myCD.getInterestRate() << endl;
   cout << "Mat. Date: " << myCD.getMaturityDate() << endl;

   myCD.getOwner().setName("Bernie Madoff");
   myCD.makeDeposit(1234.56);
   myCD.setInterestRate(0.015);
   myCD.setMaturityDate(Date(9, 23, 2019));

   cout << "\n\nNow generating formatted report." << endl;
   formattedReport(myCD);

   cout << "\n\nNow making another CD" << endl;
   CertificateOfDeposit myCD2;

   cout << "\n\nNow assigning first CD to second CD" << endl;
   myCD2 = myCD;

   cout << "\n\nNow generating second formatted report." << endl;
   formattedReport(myCD2);

   cout << "\n\nPress enter to exit." << endl;
   cin.get();

}


void formattedReport(CertificateOfDeposit cd)
{
   cout << "\n\nAccount information::" << endl;
   cout << "Owner:\t\t" << cd.getOwner().getName() << endl;
   cout << "Balance:\t" << cd.getBalance() << endl;
   cout << "Int Rate:\t" << cd.getInterestRate()*100.0 << "%" << endl;
   cout << "Mat. Date:\t" << cd.getMaturityDate() << endl;


}