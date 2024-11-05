#include<bits/stdc++.h>
using namespace std;

class String 
{
    string s;
    int len;
    public:
     String()
     {
        len=0;
        s=new char[len+1];
     }

     String(string p)
     {
        len=p.length();
        s= new char[len+1];
        s=p;
     }

     void show()
     {
        cout<<s<<endl;
     }

     void join(String a,String b)
     {
         len=a.s.length()+b.s.length();
        s=new char[len+1];
         s=a.s+" "+b.s;
     }
};

int main()
{
    String s1("riyan"),s2("susmi"),s3("rups"),m,n;
     s1.show();
     s3.show();

     m.join(s1,s2);
     m.show();
     
}

