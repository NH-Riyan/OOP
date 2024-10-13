#include <iostream>
using namespace std;
class sample
{
   int x,y;
public:
 sample(int a,int b)
 {
    x=a;
    y=b;
 }
  friend int sum(sample &s);
};

  int sum(sample &s)
  {
    return(s.x+s.y);
  }
int main()
{
   sample s1(5,10);
   cout<<sum(s1);
   
    return 0;
}