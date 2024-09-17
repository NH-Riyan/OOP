// It is an example of Compile time Polymorphism

#include<bits/stdc++.h>
using namespace std;

class Parent{

    public:
    void show(){
        cout<<"It is the Parent class"<<endl;
    }
};

class Child : public Parent{

    public:
    void show(){
        cout<<"It is the Child class"<<endl;
    }
};

int main()
{
    Child c1;
    c1.show();   // child's function overrides the parent's function

}