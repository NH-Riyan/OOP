#include <iostream>
using namespace std;
class time
{
    int hours;
    int minutes;

public:

    void gettime(int h,int m){
        hours=h;
        minutes=m;
    }

    void display() {
    cout << "\nHours:" << hours;
    cout << "\nMinutes:" << minutes;
    }

    void sum(time t1,time t2);

};

    void time :: sum(time t1,time t2){
        minutes=t1.minutes+t2.minutes;
        hours=minutes/60;
        minutes=minutes%60;
        hours=hours+t1.hours+t2.hours;
    }

int main()
{
   time t1,t2,t3;
   t1.gettime(2,45);
   t2.gettime(3,30);

   t3.sum(t1,t2);

   t1.display();
   t2.display();
   t3.display();
    return 0;
}