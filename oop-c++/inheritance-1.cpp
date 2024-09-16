#include <iostream>
using namespace std;

class Person
{
public:
  string name;
  int age;
  
  Person()          // parent constructor
  {                                 // parent constructor will be executed before child constructor
    cout<<"this is the parent/base constructor"<<endl;   
  }                                                     


  ~Person()           // parent destructor
  {                            // parent constructor will be executed after child destrutor
    cout<<"destructor form Person class"<<endl;
  }
};

class Student:public Person
{
   public:
     int roll;
    
   Student()                              // child constructor
   {
    cout<<"This is the child/derived constructor"<<endl;
   }

   void disinfo(){
    cout<<"Name-"<<name<<endl;
    cout<<"ROll-"<<roll<<endl;
   }
   ~Student()                               // child destructor
  {
    cout<<"destructor form Student class"<<endl;
  }
};

int main()
{
    Student s1;
    s1.name="polrt";
    s1.age=19;
    s1.roll=205;

    s1.disinfo();
    return 0;
}