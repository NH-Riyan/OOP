#include<bits/stdc++.h>
using namespace std;

class cartesian;
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

    friend Polar C_2_P(Polar p1,cartesian c1);
    friend cartesian P_2_C(Polar p1,cartesian c1);

};

 class cartesian
 {
    double x,y;
    public:
    cartesian (){}
    cartesian(double b,double d)
    {
        x=b;
        y=d;
    }

    void show()
    {
        cout<<"x-"<<x<<" "<<"y-"<<y<<endl;
    }

    friend Polar C_2_P(Polar p1,cartesian c1);
    friend cartesian P_2_C(Polar p1,cartesian c1);


 };

     Polar C_2_P(Polar p1,cartesian c1)
    {
        Polar p;

           double x,y;                          //polar to cartesian
           x=p1.r*cos(p1.a*3.14/180.0)+c1.x;
           y=p1.r*sin(p1.a*3.14/180.0)+c1.y;
        
        p.r=sqrt(x*x+y*y);                    //cartesian to polar
        p.a=atan(y/x)*180.0/3.14;

        return p;
    }

    cartesian P_2_C(Polar p1,cartesian c1)
    {
           cartesian c;
           double x,y;                          //polar to cartesian
           c.x=p1.r*cos(p1.a*3.14/180.0)+c1.x;
           c.y=p1.r*sin(p1.a*3.14/180.0)+c1.y;
           
           return c;

    }

int main()
{
    Polar p1(10,45),p2;
    cartesian c1(10,8),c2;

    p2=C_2_P(p1,c1);
    p2.show();

    c2=P_2_C(p1,c1);
    c2.show();

}