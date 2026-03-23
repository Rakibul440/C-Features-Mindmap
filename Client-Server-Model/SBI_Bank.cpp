#include <iostream>
#include "SBI_Bank.h"
using namespace std;

void SBI_Bank ::SetDetails(int AcNo, int balance)
{
    SBI_Bank::AcNo = AcNo;
    SBI_Bank::balance = balance;
};

void SBI_Bank ::GetDetails()
{
    cout << "\n======== Accout Details =======\n"
         << endl;
    cout << "Account No : " << SBI_Bank::AcNo << endl;
    cout << "Total Balance :" << SBI_Bank::balance << endl;
}
