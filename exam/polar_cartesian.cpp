#include<bits/stdc++.h>
using namespace std;

class Polar;

class Cartesian
{
   public:
    double x,y;
    Cartesian(){}
    Cartesian(double a,double b)
    {
        x=a;
        y=b;
    }

    void show()
    {
        cout<<"car-"<<x<<" "<<y<<endl;
    }

    Cartesian(Polar P);
};

class Polar
{
    public:
     double r,a;
     Polar(){}

     Polar(double b,double d)
     {
        r=b;
        a=d;
     }
    
       void show()
    {
        cout<<"Polar-"<<r<<" "<<a<<endl;
    }
    
     Polar (Cartesian c);
};
    Polar::Polar (Cartesian c)
    {
          r=sqrt(c.x*c.x+c.y*c.y);                    
          a=atan2(c.y,c.x)*180.0/3.14;
    }

Cartesian::Cartesian(Polar P)
    {
        x=P.r*cos(P.a*3.14/180.0);
        y=P.r*sin(P.a*3.14/180.0);
    }

int main()
{
    Polar p1(5,30),p2;
    p1.show();
    
    Cartesian c1(3,4),c2;
    c1.show();
    
    cout<<"After conversion-\n";
     p2=Polar(c1);
     p2.show();

     c2=Cartesian(p1);
     c2.show();
 
}