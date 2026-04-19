#include <iostream>
using namespace std;


class code{
    int id;
public :
    code(){};
    code(int a) {id = a;}
    code(code & x){ // copy constructors
        id = x.id;
    }

    void display(void){
        cout << id;
    }
};

int main(){

    code A(100);
    code B(A); // copy constructors called

    code C = A ; // another way to copy constructor

    code D;
    D = A ; // not called copy constructor -- copy initialization member by member

    cout << "\n id of A is : " ; A.display();
    cout << "\n id of B is : " ; B.display();
    cout << "\n id of C is : " ; C.display();
    cout << "\n id of D is : " ; D.display();

    return 0;
}
