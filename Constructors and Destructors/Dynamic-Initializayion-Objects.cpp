#include <iostream>
#include <cstring>
using namespace std;


class String{
    char *name;
    int length;
public :
    String(){
        length = 0;
        name = new char[length+1];
    }
    String(const char *s){
        length = strlen(s);
        name = new char[length+1];
        strcpy(name,s);
    }

    void display(void){
        cout << name << "\n";
    }
    void join(String &a , String &b);
};

void String::join(String &a, String &b){
    length = a.length + b.length;
    name = new char[length+1];

    strcpy(name,a.name);
    strcat(name,b.name);
}

int main(){

    const char *first = "Rakibul";
    String name1(first);
    String name2("Hayat ");
    String name3("Ahmed");

    String s1;

    s1.join(name2,name3);

    name1.display();
    name2.display();
    name3.display();

    s1.display();

    return 0;
}
