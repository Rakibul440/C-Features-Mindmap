#include <iostream>
#include <string>
using namespace std;

const int teamSize = 3;

class Employee{
    string name;
    int age;
public :
    void getData(void);
    void display(void);
};

// ==========

void Employee ::getData(void){
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter age : " ;
    cin >> age;
}

void Employee ::display(void){
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
}


int main(){
    Employee manager[teamSize];

    for(int i = 0; i < teamSize; i++){
        cout << "\nDeatils of manager" << i+1 << endl;
        manager[i].getData();
    }
    cout << "\n===Display All manageer details ===\n";

    for(int i = 0; i <teamSize; i++){
        cout << "\nManager" << i+1 << endl;
        manager[i].display();
    }


    return 0;
}
