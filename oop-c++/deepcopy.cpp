// deep copy is important when there is dynamic memory allocation in the code

#include <iostream>
using namespace std;
class Student
{
public:
  string name;
  float *cgptr;
  
   Student(string name,float cg)
   {
    this->name=name;
    cgptr= new float;
    *cgptr=cg;
   }
   
   Student(Student &obj)
   {
    this->name=obj.name;
    cgptr= new float;
    *cgptr=*obj.cgptr;
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

    Student s2(s1);
    s2.name="loki";
    *(s2.cgptr)=2.6;
    s1.disinfo();
    s2.disinfo();
    return 0;
}

