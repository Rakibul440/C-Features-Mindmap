#include <iostream>
using namespace std;

class Complex{
    float x;    // real
    float y;    // imaginary

public :
    Complex(){} // no agruments
    Complex(float a){x=y=a;} // one agr
    Complex(float real, float imag){
        x = real;
        y = imag;
    }

    friend Complex sum(Complex, Complex);
    friend void show(Complex);

};

Complex sum(Complex c1, Complex c2){
    Complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;

    return c3;
}

void show(Complex c){
    cout << c.x << " + i" << c.y << endl;
}


int main(){

    Complex A(2.7,3.5);
    Complex B(1.6);
    Complex C;

    C = sum(A,B);

    cout << "Show A = " ;
    show(A);
    cout << "Show B = " ;
    show(B);
    cout << "Show C = ";
    show(C);
    return 0;
}
