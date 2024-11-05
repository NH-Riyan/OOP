#include <iostream>
using namespace std;

class account
{
   protected: 
    string name,type;
    int acc_no;

    void acc_data()
    {
        cout<<"Enter account name-";
        cin>>name;
        cout<<"Enter account no-";
        cin>>acc_no;
        cout<<"Account type-";
        cin>>type;
    }
    void display()
    {
        cout<<"\nName-"<<name<<endl<<"Acc_no-"<<acc_no<<endl<<"Acc_Type-"<<type<<endl;
    }
}; 

class cur_acct:public account
{
    double balance,amount;
    public:
      void cur_data()
    {
        acc_data();
        cout<<"Enter balance-";
        cin>>balance;
    }
       void withdraw()
    {
        cout<<"Enter amount you want to transfer by cheque-";
        cin>>amount;
        
        if(balance>=amount)
        {
            balance-=amount;
            cout<<"successfully Transferred\n";
        }
        else cout<<"Insufficient";

    }

       void deposit()
    {
          cout<<"Enter amount you want to deposit-";
          cin>>amount;
          balance+=amount;
    }

       void charge()
    {
        double mini=1500;
        if(balance<mini)
        {
            cout<<"Charge-Yes\n"<<endl;
            balance-=50;
            cout<<"Balance after charge-"<<balance<<endl;
        }
        else cout<<"Charge-no\n"<<endl;
    }
    void c_display();
};

 void cur_acct::c_display()
 {
      display();
      cout<<"Balance-"<<balance<<endl;
      charge();
 }


class sav_acct:public account
{
    double balance,amount,interest;
    int years;
    float rate;

    public:
       void sav_data()
    {
        acc_data();
        cout<<"Enter balance-";
        cin>>balance;
    }
       void cal_int(float r=0.15)
    {
        cout<<"Enter years-";
        cin>>years;
         rate=r;
         interest=balance;
         for(int i=1;i<=years;i++)
         {
         interest=interest*(1+rate);
         }
    }
        void withdraw()
    {
        cout<<"Enter amount you want to withdraw-";
        cin>>amount;
        balance-=amount;
    }
    void s_display();
};

 void sav_acct::s_display()
 {
      display();
      cout<<"Balance-"<<balance<<endl;
      cout<<"\ncompound Interest-"<<interest<<endl;
 }


 int main()
 {
    cur_acct c;
    c.cur_data();
    c.deposit();
    c.c_display();
    c.withdraw();
    c.c_display();

    cout<<endl;

     sav_acct s;
    s.sav_data();
    s.cal_int();
    s.s_display();

 }