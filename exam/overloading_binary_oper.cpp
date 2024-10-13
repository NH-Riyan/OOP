#include <iostream>
using namespace std;
class complex
{
  float x;
  float y;

public:
    complex(){ }
    complex(float real,float img)
    {
        x=real;
        y=img;
    }
    void display()
    {
        cout<<x<<"+"<<y<<"\n";
    }

    complex operator+(complex c)
    {
    complex temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return temp;

    }
    
    //friend complex operator+(complex &c1,complex &c2);
};

//   complex operator+(complex &c1,complex &c2)              friend function
//     {
//     complex temp;      
//     temp.x=c1.x+c2.x;
//     temp.y=c1.y+c2.y;
//     return temp;

//     }  

int main()
{
   complex c1(3.5,4.5),c2(4.5,3.5),c3;
     
    c3=c1+c2;

    //c3=operator+(c1,c2);        for friend function

    c1.display();
    c2.display();
    c3.display();
  
   
    return 0;
}