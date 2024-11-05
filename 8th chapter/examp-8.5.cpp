#include <iostream>
using namespace std;

class alpha
{
     int x;
   public:
      alpha(int i)
      {
        x=i;
        cout<<"alpha initialized\n";
      }  
      void show_x()
      {
        cout<<"x="<<x<<"\n";
      }
};

class beta
{
  
     float y;
  public:
     beta(float b)
     {
          y=b;
          cout<<"beta initialized\n";
     }
     void show_y()
      {
        cout << "y="<<y<<"\n";
      }
};    


class gamma:public alpha,public beta
{
   int n,m;

   public:
      gamma(int a ,float b,int c,int d):alpha(a),beta(b)
        {
          m=c;
          n=d;
          cout<<"gamma initialized\n";
        }
      void show_mn()
        {
          cout << "m="<<m<<"\n";
          cout << "n="<<n<<"\n";
        }

};

int main()
{
   gamma g(5,10.50,20,30);
    g.show_x();
    g.show_y();
    g.show_mn();

   return 0;
}