#include<bits/stdc++.h>
using namespace std;
class books
{
public:
    string author;
    string title;
    int price;
    int stock;

    books(string a,string t,int p,int s)
    {
        author = a;
        title = t;
        price = p;
        stock = s;
    }
    void display_details()
    {
        cout<<"book title : "<<title<<endl;
        cout<<"author name : "<<author<<endl;
        cout<<"book price : "<<price<<endl;
        cout<<"stock : "<<stock<<endl;
    }
   void display_cost()
   {
       int num;
       cout<<"how many copies?\n";
       cin>>num;
       if(stock>=num)
           cout<<"Total-"<<num*price<<endl;
           
       else cout<<"Insufficient\n";
   }
};
   void find_book(vector<books*>b)
  {
      string a,t;

        cout<<"enter book title "<<endl;
        cin>>t;
        cout<<"enter author name "<<endl;
        cin>>a;

        for(int i=0; i<b.size(); i++)
        {
            if(b[i]->author == a && b[i]->title == t)           //b[i] is a pointer to a books object, so we need to use the arrow operator (->) instead of the dot operator (.).
            {
                cout<<"book available"<<endl;
                b[i]->display_details();
                b[i]->display_cost();
                return;
            }
        }
            cout<<"book not available"<<endl;

    }



int main()
{
    vector<books*>b;

    b.push_back(new books("Atasi","Ts",350,10));
    b.push_back(new books("maruf","M%N",220,15));
    b.push_back(new books("aps","Crazy",400,10));
    b.push_back(new books("susmi","Money",550,5));

    find_book(b);

}
