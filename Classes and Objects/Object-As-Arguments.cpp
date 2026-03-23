#include <iostream>
using namespace std;


class Time{

    int hours;
    int minutes;
public:
    void getTime(int,int);
    void puttime(void);

    void totalTime(Time,Time);  // declearation with object as arguments;

};

inline void Time::getTime(int h, int m){
    hours = h;
    minutes = m;
}

void Time::puttime(void){
    cout << hours << " hours and "
        << minutes << " minutes\n";

}

void Time ::totalTime(Time t1, Time t2){  // t1 and t2 are objects
    minutes = t1.minutes + t2.minutes;
    hours = minutes/60;
    minutes = minutes%60;
    hours = hours + t1.hours + t2.hours ;
}

int main(){

    Time T1,T2,T3;

    T1.getTime(2,45);
    T2.getTime(3,30);

    T3.totalTime(T1,T2);

    T1.puttime();
    T2.puttime();
    T3.puttime();

    return 0;
}
