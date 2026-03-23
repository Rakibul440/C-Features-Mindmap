#ifndef SBI_BANK_H
#define SBI_BANK_H

#include <string.h>

class SBI_Bank
{
    int AcNo;
    int balance;

public:
    void SetDetails(int AcNo, int balance);
    void GetDetails();
};

#endif