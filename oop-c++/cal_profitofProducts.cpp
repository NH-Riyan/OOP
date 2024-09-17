#include<bits/stdc++.h>
using namespace std;

class Product 
{
    private:
     double buying_price;
     public:
     string name;
     int number;
     double selling_price;
     Product(string name,double selling_price,double buying_price,int number)
     {
        this->name=name;
        this->selling_price=selling_price; 
        this->buying_price=buying_price; 
        this->number=number;
     }

     friend double cal_pro(Product p);
};

  double cal_pro(Product p)
 {
    double profit=(p.selling_price-p.buying_price)*p.number;
    return profit;
 }

 int main()
{
    string pro_n;
    int n,t,total_profit=0;
    double sell_pri,buy_pri;
    cout<<"enter the number of products you want to buy : ";
    cin>>t;
     for(int i=1;i<=t;i++)
    {
     cout<<"Product number "<<i<<"\nenter product name : ";
     cin>>pro_n;
      cout<<"enter selling price : ";
     cin>>sell_pri;
      cout<<"enter buying price : ";
     cin>>buy_pri;
      cout<<"enter quantity : ";
     cin>>n;
     cout<<endl;
     Product p(pro_n,sell_pri,buy_pri,n);
     total_profit += cal_pro(p);
    }
    cout<<"Total Profit : "<<total_profit<<endl;
}