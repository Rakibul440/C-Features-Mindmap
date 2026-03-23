#include <iostream>
#include "SBI_Bank.h"

using namespace std;

int main()
{

    SBI_Bank coustomer;
    coustomer.SetDetails(2008, 5000);
    coustomer.GetDetails();

    return 0;
}