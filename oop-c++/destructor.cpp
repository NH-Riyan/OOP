#include <iostream>
using namespace std;
class Student
{
public:
  string name;
  float *cgptr;
  
  Student(string name,float cg){
    this->name=name;
    cgptr= new float;
    *cgptr=cg;
   }

  ~Student(){   //destructor
      cout<<"Deleted";
      delete cgptr;
   }
   
   void disinfo()
   {
    cout<<"Name-"<<name<<endl;
    cout<<"Cgpa-"<<*cgptr<<endl;
   }

};

int main()
{
    Student s1("aru",3.4);
    s1.disinfo();
    return 0;
}