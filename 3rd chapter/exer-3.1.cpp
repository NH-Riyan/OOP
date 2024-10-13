#include<iostream>
using namespace std;

void swap(int &m, int &n)
{
    int x;
    x = m;
    m = n;
    n = x;
}

int main()
{
    int a=10, b=5;
    cout<<"Before swapping-\n";
    cout<<"a-  "<<a<<"  b-  "<<b<<"\n";
    swap(a,b);
    cout<<"After swapping-\n";
    cout<<"a-  "<<a<<"  b-  "<<b<<"\n";
    return 0;
}

