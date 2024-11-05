#include <bits/stdc++.h>
using namespace std;
class DB;

class DM
{   
    public:
    int m;
    float cm;

    DM(){}
    DM(double x,double y)
    {
        m=x;
        cm=y;
    }
    void show()
    {
        cout<<m<<" "<<cm<<endl;
    }
        friend DB dm_to_db(DM &a,DB &b);
        friend DM db_to_dm(DM &c,DB &d);
};

class DB
{   
    public:
    int f;
    float i;

    DB(){}
    DB(double x,double y)
    {
        f=x;
        i=y;
    }
    void show()
    {
        cout<<f<<" "<<i<<endl;
    }
    friend DB dm_to_db(DM &a,DB &b);
    friend DM db_to_dm(DM &c,DB &d);
};

DB dm_to_db( DM &a,DB &b)
{
    DB db;
    double s=a.m*39.37+a.cm*0.39;
    db.f=(s/12);
    db.i=s-(db.f*12);
    return db;
}


DM db_to_dm(DM &c,DB &d)
{
    DM dm;
    double t=d.f*30.48+d.i*2.5;
    dm.m=(t/100);
    dm.cm=t-(dm.m*100);
    return dm;
}

int main()
{
    DM dm1(5,15),dm2;
    DB db1(7,15),db2;

    dm2=db_to_dm(dm1,db1);
    db2=dm_to_db(dm1,db1);
     
    dm1.show();
    db1.show();

    dm2.show();
    db2.show();
}