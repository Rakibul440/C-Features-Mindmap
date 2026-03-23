#include <iostream>
using namespace std;

// static member used as a counter that records the occurences of all object

class Items{
    static int count;
    int number;
public:
    void getData(int n){
        number = n;
        count++;
    }
    void getCount(void){
        cout << "count : " << count << endl;
    }
};

// scope of each static member variable must be define outside of the class
int Items ::count;

int main(){
    Items a,b,c; // count is initialized to 0

    a.getCount();
    b.getCount();
    c.getCount();

    a.getData(100);
    b.getData(200);
    c.getData(300);

    cout << "=== After reading data ==="  << endl;

    a.getCount();
    b.getCount();
    c.getCount();


    return 0;
}
