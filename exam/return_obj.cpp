#include <iostream>
using namespace std;
class complex
{
  float x;
  float y;

public:
    complex(){};
    complex(float real,float img)
    {
        x=real;
        y=img;
    }
    void display()
    {
        cout<<x<<"+"<<y<<"\n";
    }

    friend complex sum(complex c1,complex c2);

};

complex sum(complex c1,complex c2)
{
    complex temp;
    temp.x=c1.x+c2.x;
    temp.y=c1.y+c2.y;
    return temp;
}
int main()
{
   complex a(3.5,4.5),b(4.5,3.5),c;
     
     c=sum(a,b);
    a.display();
    b.display();
    c.display();
  
   
    return 0;
}