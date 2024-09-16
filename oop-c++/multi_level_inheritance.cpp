#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
//--------------------------------//
class Student : public Person
{
public:
    int roll;

    Student(string name, int age, int roll) : Person(name, age)
    {
        this->roll = roll;
    }
};
//----------------------------------//
class student_council : public Student
{
public:
    string year;
     
     // inheriting the properties of Person and Student class//

    student_council(string name, int age, int roll, string year) : Student(name, age, roll)
    {
        this->year = year;
    }

    void disinfo()
    {
        cout << "Info of a student who is a member of student council \nName-" << name << endl;
        cout << "Age-" << age << endl;
        cout << "ROll-" << roll << endl;
        cout << "year-" << year << endl;
    }
};

int main()
{
   student_council s1("Gian",24,65,"3rd");
   s1.disinfo();
}