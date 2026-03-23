#include <iostream>
using namespace std;

class Number{
    int x;
    int y;

public:
    void getNum(int a,int b){
        x = a;
        y = b;
    }
    friend int sum(Number num);
};

int sum(Number num){
    int Number::*ptrX = &Number::x;  // pointer of member x of class Number;
    int Number::*ptrY = &Number::y;

    Number *ptrNum = &num;
    int S = num.*ptrX + ptrNum->*ptrY;  // first part ( objName .* pointer-to-member )
                                        // second part (pointer-to-object ->* pointer-to-member )

    return S;
}


int main(){

    Number myNum;   // Object declearation

    void (Number::*ptrGetNum)(int,int) = &Number::getNum; // pointer of a function of class Number
    (myNum.*ptrGetNum)(10,20);  // calling funciton  --  ( objName .* pointer-to-member )()
    cout << "Sum = " << sum(myNum) << endl;

    // pointer of Number type object myNum
    Number *ptrNum = &myNum;
    (ptrNum->*ptrGetNum)(30,40);  // calling funciton  --  ( pointer-to-object ->* pointer-to-member )()
    cout << "Sum = " << sum(myNum) << endl;

    return 0;
}
