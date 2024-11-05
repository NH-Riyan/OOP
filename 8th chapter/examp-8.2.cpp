#include <iostream>

using namespace std;

class B
{
int a; // private; not inheritable

public:

int b;

// public; ready for inheritance

void get_ab();

int get_a(void);

void show_a(void);

};

class D: private B
{

int c;
public:

void mul (void);
void display(void);
};

void B::get_ab(void)

{

cout << "Enter values for a and b:";
cin >> a >> b;
}

int B:: get_a()
{
return a;
}

void B:: show_a()
{
cout << "a=" << a << "\n";
}
void D:: mul ()
{
get_ab();

// 'a' cannot be used directly

c=b*get_a();
}

void D:: display()
{
show_a();

// outputs value of 'a'

cout << "b="<<b<< "\n";

cout<<"c="<< c<<"\n";
}


int main()
{
D d;

// d.get_ab(); WON'T WORK 
d.mul(); 
// d.show a(); WON'T WORK 
d.display();
// d.b = 20;

d.mul();

d.display();

return 0;

}