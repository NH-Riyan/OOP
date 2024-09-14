#include <iostream>
using namespace std;
class teacher
{
public:

  string name;
  string sub;
  string dept;
  double salary;

   void changedept(string newdept)
   {
         dept=newdept;
   }
  
   void displaydata();

};


void teacher ::displaydata(void)
{
    cout << "Name:" << name<<endl;
    cout << "Sub:" <<sub<<endl ;
    cout << "dept:" << dept<<endl;
    cout << "Salary:" <<salary<<endl ;
}
int main()
{
    
   teacher t1;
   t1.name="UKA";
   t1.sub="BE";
   t1.dept="CSE";
   t1.salary=50000;

   t1.displaydata();


    return 0;
}
