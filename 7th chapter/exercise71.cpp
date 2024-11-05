#include<bits/stdc++.h>
using namespace std;
 class Float
 {
    float f;
    public:
    Float(){}
    Float(float f)
    {
        this->f=f;
    }
     Float operator+(Float F)
     {
        Float f1;
        f1=f+F.f;
         return f1;
     }

       Float operator-(Float F)
     {
        Float f1;
        f1=f-F.f;
         return f1;
     }

     friend Float operator *(Float a,Float b);
    
     friend Float operator /(Float a,Float b);

     void show()
     {
        cout<<f<<endl;
     }
 };

    Float operator *(Float a,Float b)
     {
          Float f1;
          f1=a.f*b.f;
          return f1;
     }

     Float operator /(Float a,Float b)
     {
          Float f1;
          f1=a.f/b.f;
          return f1;
     }

int main()
{
    Float f1(5.5),f2(16.5),f3,f4,f5,f6;
    f3=f1+f2;
    f4=f2-f1;
    f5=f1*f2;
    f6=f2/f1;

    f3.show();
    f4.show();
    f5.show();
    f6.show();
}     