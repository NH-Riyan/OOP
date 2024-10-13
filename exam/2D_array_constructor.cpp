#include <iostream>
using namespace std;
class matrix
{
  int **p;  //pointer to matrix
  int d1,d2;

public:
    matrix(int x,int y)
    {
       d1=x;
       d2=y;
       p=new int *[d1];
       for(int i=0;i<d1;i++)
       p[i]=new int [d2];
    }
    void putdata(int i,int j,int data)
    {
        p[i][j]=data;
    }
    void display()
    {
        for(int i=0;i<d1;i++)
        {
            for(int j=0;j<d2;j++)
             cout<<p[i][j]<<" ";

            cout<<"\n"; 
        }
    }

};

int main()
{
    int value;
   matrix m(3,3);

   cout<<"enter data\n";

   for (int i =0;i<3; i++)
   {
     for(int j=0;j<3;j++)
     {
        cin>>value;
        m.putdata(i,j,value);
     }
   }
    m.display();
  
   
    return 0;
}