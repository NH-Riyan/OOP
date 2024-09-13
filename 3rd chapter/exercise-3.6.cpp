#include <iostream>
using namespace std;
class player
{
    char name [30];
    int runs,inn,notout;

public:
    void average(char name[],int r,int inn,int notout);
};

inline void player::average(char name[],int runs,int inn,int notout)
{
     float aver=static_cast<float>(runs)/(inn-notout);
     cout << "Enter name:"<<name<<"\t";
     cout << "Runs: "<<runs<<"\t";
     cout << "Innings: "<<inn<<"\t";
     cout << "Times not out: "<<notout<<"\t";
     cout << "Average:" << aver<<endl;
}
int main()
{
    player p1,p2,p3;
    p1.average("Sachin",8430,230,18);
    p2.average("Saurav",4200,130,9);
    p3.average("Rahul",3350,105,11);
    return 0;
}

