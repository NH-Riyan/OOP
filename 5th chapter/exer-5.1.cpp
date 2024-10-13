#include<iostream>
using namespace std;
class bank_acc
{
	char name[30];
	char acc_type[30];
	int acc_no;
	float balance;
	public:
	void init()
	{
		cout<<"Name ";
		cin>>name;
		cout<<"Account type ";
		cin>>acc_type;
		cout<<"Account number ";
		cin>>acc_no;
		cout<<"Balance ";
		cin>>balance;
	}
	void deposit()
	{
		float amount;
		cout<<"Enter amount-";
		cin>>amount;
		balance=balance+amount;
		cout<<"Current account balance="<<balance<<endl;
	}
	void withdraw()
	{
		float with_amount;
		cout<<"Enter amount to be withdrawn-";
		cin>>with_amount;
		if(balance<with_amount)
		cout<<"Insufficient balance!"<<endl;
		else
		{
			balance=balance-with_amount;
			cout<<"You withdrew rupees "<<with_amount<<" and current balance="<<balance<<endl;
		}
	}
	void display()
	{
		cout<<"Name="<<name<<endl;
		cout<<"Balance="<<balance;
		cout<<endl;
	}
};
int main()
{
	bank_acc b1;
	int x;
	//clrscr(); //changed
	b1.init();
	b1.display();
	while(1)
	{
	cout<<"Do you want to withdraw or deposit?"<<endl;
	cout<<"To deposit enter 1 and to withdraw enter 2"<<endl;
	cin>>x;
	if(x==1)
	b1.deposit();
	else if(x==2)
	b1.withdraw();
	else
	exit(1);
	}

}