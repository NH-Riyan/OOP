#include <iostream>
using namespace std;
class test
{
  int x;

public:
    test()
    {
        x=0;
    }
    test(int a)
    {
        x=a;
    }
    test(test &t)
    {
        x=t.x;
    }
    void display()
    {
        cout<<x<<"\n";
    }

};

int main()
{
     test t1;
     t1=test(10);
     test t2;
     t2=test(t1);   //or t2=t1 same thing
      
    t1.display();
    t2.display();
  
   
    return 0;
}