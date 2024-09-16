// It is an example of run time polymorphism 
#include<bits/stdc++.h>
using namespace std;

class Parent{

    public:
    virtual void hello(){
        cout<<"hello from Parent class"<<endl;
    }

    virtual int cal(int x,int y)
    {
        return x+y;
    }
};

class Child : public Parent{

    public:
    void hello(){
        cout<<"hello from Child class"<<endl;
    }

    int cal(int x,int y)
    {
        return x*y;
    }
};

int main()
{
    Child c1;
    c1.hello(); 
    cout<<c1.cal(10,5);  
}