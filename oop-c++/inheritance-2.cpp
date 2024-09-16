#include <iostream>
using namespace std;

class Person
{
public:
  string name;
  int age;

  Person(string name,int age)                                                    
 {
    this->name=name;
    this->age=age;
 }
};


class Student:public Person
{
   public:
     int roll;
    
    Student(string name,int age,int roll):Person(name,age)   // inherited the properties of Person class
    {
        this->roll=roll;
    }
    void disinfo();   
};

 void Student :: disinfo(){
    cout<<"Info of a student \nName-"<<name<<endl;
    cout<<"Age-"<<age<<endl;
    cout<<"ROll-"<<roll<<endl;
 }


class Teacher:public Person
{
   public:
     string sub;
    
    Teacher(string name,int age,string sub):Person(name,age)   // inherited the properties of Person class
    { 
        this->sub=sub;
    }
    void Teacherinfo()
    {
        cout<<"\nInfo of a teacher\nName-"<<name<<endl;
        cout<<"Age-"<<age<<endl;
        cout<<"Sub-"<<sub<<endl;
    };  
};




int main()
{
    Student s1("roy",24,36);
    s1.disinfo();
    Teacher t1("AL",53,"OOP");
    t1.Teacherinfo();
    return 0;
}
