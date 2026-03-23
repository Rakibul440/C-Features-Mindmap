#include <iostream>
using namespace std;

class Even;

class Odd {
    int num1;
    int num2;
public :
    void getData(int n, int m){
        num1 = n;
        num2 = m;
    }
    void display(void){
        cout << "\n== Data of Class Odd ==\n"
            << "num1 : " << num1 << "\n"
            << "num2 : " << num2 << "\n";
    }
    friend void swapData(Odd &,Even &);
};


class Even{
    int firstN;
    int secondN;
public :
    void getData(int x, int y){
        firstN = x;
        secondN = y;
    }
    void display(void){
        cout << "\n== Data of Class Even ==\n"
            << "firstN : " << firstN << "\n"
            << "SecondN : " << secondN << "\n";
    }
    friend void swapData(Odd &,Even &);
};

void swapData(Odd &o,Even &e){

    int temp1 = o.num1;
    o.num1 = e.firstN;
    e.firstN = temp1;

    int temp2 = o.num2;
    o.num2 = e.secondN;
    e.secondN = temp2;

}

int main(){

    Odd o;
    o.getData(13,17);
    o.display();

    Even e;
    e.getData(10,20);
    e.display();

    swapData(o,e);

    cout << "\n==== After swaping ====" << endl;
    o.display();
    e.display();

    return 0;
}
