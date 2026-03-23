#include <iostream>
using namespace std;

// Using friend function to add data object of two different classes

class ABC; // forward declearation

class XYZ {
    int data;
public :
    void setValue(int value){ data = value ;}
    friend void add(XYZ,ABC) ; // friend function declearation
};

class ABC {
    int data;
public :
    void setValue(int value){ data = value ;}
    friend void add(XYZ,ABC);
};

// Friend Function definition;
void add(XYZ obj1, ABC obj2){
    cout << "Sum of data values of XYZ and ABC objects using friend funciton : " << obj1.data + obj2.data << endl;
}


int main(){
    XYZ obj1;
    ABC obj2;

    obj1.setValue(5);
    obj2.setValue(50);

    add(obj1,obj2); // calling friend function

    return 0;
}
