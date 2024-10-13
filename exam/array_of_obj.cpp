#include <iostream>
using namespace std;
class employee
{
    char name [30];
    int age;

public:
    void getdata(void);
    void display(void);
};

void employee :: getdata(void)
{
     cout << "Enter name:";
     cin >> name;
     cout << "Enter age: ";
     cin>> age;
}

void employee ::display(void)
{
    cout << "\nName:" << name;
    cout << "\nAge:" << age;
}
int main()
{
   employee staff[3];
   for (int i = 0; i < 3; i++)
   {
     staff[i].getdata();
   }
   cout<<"details-";

   for (int i = 0; i < 3; i++)
   {
     staff[i].display();
   }
   
    return 0;
}