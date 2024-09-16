
#include<bits/stdc++.h>
using namespace std;

class Gen {
    virtual void timeline()=0;
};

class Millennials : public Gen{

    public:
    void timeline(){
        cout<<"Timeline : 1981-1996 "<<endl;
    }
};

class GenZ : public Gen{

    public:
    void timeline(){
        cout<<"Timeline : 1997-2012 "<<endl;
    }
};

class Gen_Alpha : public Gen{

    public:
    void timeline(){
        cout<<"Timeline : 2013-present "<<endl;
    }
};

int main()
{
    Millennials m;
    m.timeline();

    GenZ z;
    z.timeline();

}