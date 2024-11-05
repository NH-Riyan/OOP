#include<bits/stdc++.h>
using namespace std;

class book
{
    public:
    string author,title;
    double price;
    int stock;

    void data(string a,string t,double p,int s)
    {
        author=a;
        title=t;
        price=p;
        stock=s;
    }

};

int main()
{

     book arr[4];
     arr[1].data("Atasi","Ts",350,10);
     arr[2].data("maruf","M%N",220,15);
     arr[3].data("susmi","Money",550,5);
     arr[4].data("aps","Crazy",400,10);

    string auth,name;
    int num;
    cin>>auth>>name;
    for(int i=1;i<=4;i++)
    {
        if(auth==arr[i].author && name==arr[i].title)
        {
             cout<<"enter how many copies you want-";
             cin>>num;
             if(num<=arr[i].stock)
             {
                cout<<"\nTotal-"<<num*arr[i].price<<endl;
             }
             else cout<<"Required copies not in stock\n";
        }

         else if(i==4) cout<<"Not Available\n";
    }

}
