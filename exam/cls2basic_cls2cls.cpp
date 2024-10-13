#include <iostream>
using namespace std;
class invent1
{
    int code;
    int items;
     float price;

public:

    invent1(int a,int b,float c){
       code=a;
       items=b;
       price=c;
    }

    void display() {
    cout << "\nCode:" << code;
    cout << "\nItems:" << items;
    cout<< "\nPrice:"<<price;
    }
    
    int getcode() { return code; }
    int getitems() { return items; }
    int getprice()  { return price; }

    operator float()
    {
        return items*price;
    }

};

 class invent2
 {
    int code;
    float value;
    public:
     invent2() {}
     invent2(int x,float y)
     {
        code=x;
        value=y;
     }

     invent2(invent1 p)
     {
        code=p.getcode();
        value=p.getitems()*p.getprice();
     }
    
     void display() {
     cout << "\nCode:" << code;
     cout << "\nValue :" << value;
     }

 };

int main()
{
  invent1 s1(101,5,140.00);

   float total=s1;               //class to basic type conversion
   cout<<"total:"<<total<<"\n";

   invent2 d1;
   d1=s1;                //class to class conversion

   d1.display();
    return 0;
}