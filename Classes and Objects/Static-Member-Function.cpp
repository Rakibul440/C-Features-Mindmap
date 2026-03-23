#include <iostream>
using namespace std;


class Test{
    int code;
    static int count;
public :
    void setCode(void){code = ++count;}
    void showCode(void){
        cout << "Object Number : " << code << endl;
    }
    static void showCount(void){
        cout << "Count : " << count << endl;  // static member function can only access to static member data
    }

};

int Test ::count;

int main(){

    Test t1,t2;
    t1.setCode();  // count 1
    t2.setCode();  // count 2

    Test ::showCount(); // static member function can call without object creation
                        // count = 2

    Test t3;
    t3.setCode();  // count 3

    Test ::showCount(); // count = 3

    t1.showCode();
    t2.showCode();
    t3.showCode();

    return 0;
}
