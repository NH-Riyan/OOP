#include <iostream>
using namespace std;
class teacher
{
public:
  string name;
  string sub;
  string dept;
  double salary;
  
  // Non-parameterized constuctor
  //   teacher()
  //   {
  //     cout << "Here is a info of a teacher-"<<endl;
  //   }

  // Parameterized constuctor
  teacher(string name,string sub,string dept,double salary)
  {
    this->name=name;
    this->sub=sub;
    this->dept=dept;
    this->salary=salary;
  }

  //Copy construtor
  teacher(teacher &obj)
  {
    cout<<"this is a custom copy constructor"<<endl;
    this->name=obj.name;
    this->sub=obj.sub;
    this->dept=obj.dept;
    this->salary=obj.salary;
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
    
   teacher t1("ben","OPP","CSE",100000);
   t1.displaydata();

   teacher t2("Lorup","BE","CSE",75000);
   teacher t3(t2);
   t3.displaydata();
    return 0;
}