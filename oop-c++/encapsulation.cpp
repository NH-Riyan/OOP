//encapsulation 
#include <iostream>
using namespace std;
class Account
{
    private:  //data hiding 
    string pass;
public:

  string name;
  
   void getpass(string p){
    pass=p;
   }

   void disinfo()
   {
    cout<<"Here is your info\nName:"<<name<<endl;
    cout<<"Pass:";
     for (int i = 0; i < pass.size(); i++)
     {
        cout<<"*";
     }
     cout<<endl;
     
   }

};

int main()
{
    Account a1;
   a1.name="goku";
   a1.getpass("1234567");
   a1.disinfo();


    return 0;
}

