#include<bits/stdc++.h>
using namespace std;

class Polar
{
    double r,a;

    public:
    Polar (){}
    Polar(double b,double d)
    {
        r=b;
        a=d;
    }

    void show()
    {
        cout<<"r-"<<r<<" "<<"a-"<<a<<endl;
    }

    friend Polar operator+(Polar p1,Polar p2);
};

     Polar operator+(Polar p1,Polar p2)
    {
        Polar p3;

           double x,y;                          //polar to cartesian
           x=p1.r*cos(p1.a*3.14/180.0)+p2.r*cos(p2.a*3.14/180.0);
           y=p1.r*sin(p1.a*3.14/180.0)+p2.r*sin(p2.a*3.14/180.0);
           cout<<"x-"<<x<<" y-"<<y<<" "<<endl;
        
        p3.r=sqrt(x*x+y*y);                    //cartesian to polar
        p3.a=atan(y/x)*180.0/3.14;

        return p3;
    }

int main()
{
    Polar p1(5,60),p2(10,45),p3;
    p3=p1+p2;

    p1.show();
    p2.show();
    p3.show();
}