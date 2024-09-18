#include<bits/stdc++.h>
using namespace std;

class Account
{
    string name,acc_no;
    double balance;
    public:
    Account()
    {
      cout<<"Enter Name :";
      getline(cin,name);
      cout<<"Enter Account no :";
      cin>>acc_no;
      cout<<"Enter Balance :";
      cin>>balance;
      system("cls");
    };

    void Deposit()
    {
        double d;
        cout<<"Enter the deposit amount : ";
        cin>>d;
        balance+=d;
        cout<<"New balance after deposit : "<<balance<<" Taka"<<endl;
    }

      void Withdraw(double W)
    {
        balance-=W;
        cout<<"New balance after withdraw : "<<balance<<" Taka"<<endl;
    };
      void display();
};

 void Account :: display()
 {
    cout<<"Name :"<<name<<endl;
    cout<<"Account No :"<<acc_no<<endl;
    cout<<"Balance :"<<balance<<" Taka"<<endl;
 }

main()
{
    Account a;
    int amount,choice,br=1;
    do{
        system("pause");
        cout<<"Options :"<<endl;
        cout<<"1.Deposit Amount :"<<endl;
        cout<<"2.Withdraw Amount :"<<endl;
        cout<<"3.Display :"<<endl;
        cout<<"4.Exit "<<endl;

        cout<<"Enter any option :";       
        cin>>choice;
        switch (choice)
        {
        case 1:
            a.Deposit();
            break;
        case 2:
            cout<<"enter withdraw amount :";
            cin>>amount;
            a.Withdraw(amount);
            break;
        case 3:
            a.display();
            break;
        case 4:
            br=0;
            cout<<"THANK YOU";
            break;;
        default:
            cout<<"You entered invaild number"<<endl;
            break;
        }
    }while (br);
    

}