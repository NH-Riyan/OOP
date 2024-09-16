// It is an example of Compile time Polymorphism

#include<bits/stdc++.h>
using namespace std;

class Print{

    public:
    void show(int x){
        cout<<"it is a number : "<<x<<endl;
    }

    void show(char c){
        cout<<"it is a character : "<<c<<endl;
    }

    void show(string s){
        cout<<"it is a string : "<<s<<endl;
    }
};

int main()
{
    Print p1;
    p1.show(20);
    p1.show('R');
    p1.show("polymorphism");
}