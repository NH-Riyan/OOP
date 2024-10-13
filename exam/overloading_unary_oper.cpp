#include <iostream>
using namespace std;
class demo
{
   int x;
   int y;
public:
  
    demo(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<x<<"  "<<y<<"\n";
    }

    void operator-()
    {
    x=-x;
    y=-y;
    };

   // friend void operator-(demo &d);       for friend function
 
};
//    void operator -(demo &d)              friend function
//    {
//       d.x=-d.x;
//       d.y=-d.y;
//    }
 

int main()
{
   demo d(10,20);
    d.display();
    -d;
    d.display();
   
    return 0;
}