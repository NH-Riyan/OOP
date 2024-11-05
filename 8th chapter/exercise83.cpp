#include<bits/stdc++.h>
using namespace std;
class staff
{
    char code;
    string name;
    public:
     void get(char c,string s)
     {
        name=s;
        code=c;
     }
     void s_display()
     {
        cout<<"Code-"<<code<<endl<<"Name-"<<name<<endl;
     }
};

class teacher:public staff
{
    string sub;
    public:
     teacher(string s)
     {
        sub=s;
     }

     void t_display()
        {cout<<"Subject-"<<sub<<endl;}
};

class officer:public staff
{
    char grade;
    public:
      officer(char s)
     {
        grade=s;
     }

     void o_display()
     {
        cout<<"Grade-"<<grade<<endl;
     }
};

class typist:public staff
{
    int speed;
    char group;
    public:
     typist() {}
     typist(int a,char c)
     {
        speed=a;
        group=c;
     }

     void t_display()
     {
        cout<<"Speed-"<<speed<<endl<<"Group-"<<group<<endl;
     }
};

class regular :public typist
{
    public:
      regular()
     {
        cout<<"Monthly wages-15000tk\n";
     }
};


class casual :public typist
{
    public:
      casual()
     {
        cout<<"daily wages-500tk\n";
     }
};


int main()
{
    string n;
    char c;
    cout<<"Enter code-";
    cin>>c;
    cout<<"Enter Name-";
    cin>>n;

     staff s;
     s.get(c,n);

    if(c=='T')
    {
        teacher t("CSE");
        s.s_display();
        t.t_display();
    }

    if(c=='O')
    {
        officer o('B');
        s.s_display();
        o.o_display();
    }
    if(c=='W')
    {
        char g='R';
        
        typist t(45,g);
        s.s_display();
        t.t_display();

        if(g=='R')
            regular r;
        else
            casual c; 
    }
}