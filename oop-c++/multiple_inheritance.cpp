<<<<<<< HEAD
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
};

class Teacher
{
public:
    string sub;
    double salary;
};

class TA : public Student,public Teacher   //inheriting the properties of 2 classes
{ 
public:
    void getinfo(string n,int r,string s,double sal);
    void display();
};

  void TA :: getinfo(string n,int r,string s,double sal)
    {
        name=n;
        roll=r;
        sub=s;
        salary=sal;
    }

 void TA :: display()
    {
        cout << "\nInfo of a TA :\nname-" << name << endl;
        cout << "Roll-" <<roll<< endl;
        cout << "Sub-" <<sub<< endl;
        cout <<"Salary-"<<salary;
    }

int main()
{
   TA t1;
   t1.getinfo("clark",25,"DSA",55000);
   t1.display();
=======
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
};

class Teacher
{
public:
    string sub;
    double salary;
};

class TA : public Student,public Teacher   //inheriting the properties of 2 classes
{ 
public:
    void getinfo(string n,int r,string s,double sal);
    void display();
};

  void TA :: getinfo(string n,int r,string s,double sal)
    {
        name=n;
        roll=r;
        sub=s;
        salary=sal;
    }

 void TA :: display()
    {
        cout << "\nInfo of a TA :\nname-" << name << endl;
        cout << "Roll-" <<roll<< endl;
        cout << "Sub-" <<sub<< endl;
        cout <<"Salary-"<<salary;
    }

int main()
{
   TA t1;
   t1.getinfo("clark",25,"DSA",55000);
   t1.display();
>>>>>>> 53db8a3df0eacdd56179d9db70ad17cb6b5c9c53
}