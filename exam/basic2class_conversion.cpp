
//     basic type to class type

#include <iostream>
using namespace std;
class time
{
    int hours;
    int minutes;

public:
     time(){}
     time(int t)
     {
        hours=t/60;
        minutes=t%60;
     }
    void display() {
    cout << "\nHours:" << hours;
    cout << "\nMinutes:" << minutes;
    }


};

int main()
{
   time t1;
   int duration=105;
   t1=duration;
   t1.display();
    return 0;
}