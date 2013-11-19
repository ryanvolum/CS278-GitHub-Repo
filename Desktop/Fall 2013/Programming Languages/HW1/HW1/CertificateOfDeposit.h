#include "BankAccount.h"
#include "Date.h"
using namespace std;

class CertificateOfDeposit : public BankAccount
{
public:
   CertificateOfDeposit();  //default ctor
   CertificateOfDeposit(const CertificateOfDeposit& CD);  //copy ctor
   ~CertificateOfDeposit();  //dtor
   const CertificateOfDeposit& operator= (const CertificateOfDeposit& rhs); 

   void setMaturityDate(const Date& newDate);
   const Date& getMaturityDate();

private:
   Date maturityDate;
};
