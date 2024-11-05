#include <bits/stdc++.h>
using namespace std;

class dep
{
    double a,p;
    float r;
    int y;

    public:

    dep(){}
    dep(double p,int y,float rate=0.12)
    {
        a=p;
        this->p=p;
        this->y=y;
        r=rate;
        for(int i=1;i<=y;i++)
        {
            a=a*(1.0+r);
        }
    }

    dep(double p,int y,int R)
    {
        a=p;
        this->p=p;
        this->y=y;
        r=R;
        for(int i=1;i<=y;i++)
        {
            a=a*(1.0+float(R)/100);
        }
    }

    void show()
    {
        cout<<"amount-"<<a<<endl;
        cout<<"p-"<<p<<endl<<"y-"<<y<<" "<<r<<endl;
    }

};
    

int main()
{
    dep a,b,c;
    int R;
    float r;
    cin>>R;

    a=dep(10000,3,R);
    a.show();

    cin>>r;
    b=dep(10000,3,r);
    b.show();

    c=dep(10000,3);
    c.show();
}
   

