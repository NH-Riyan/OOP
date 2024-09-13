#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string name[n];
    int units[n];
    int charge[n];

    for(int i=0; i<n; i++)
    {
        cout<<"enter name : ";
        cin>>name[i];
        cout<<"enter units : " ;
        cin>>units[i];
    }

    for(int i=0; i<n; i++)
    {
        int u=units[i];
        if(u>100)
        {
            charge[i]=100*0.6;
            u-=100;
        }
        if(u>200)
        {
            charge[i]+=200*0.8;
            u-=200;
        }
        charge[i]+=u*0.9;
        charge[i]+=50;

        if(units[i]>300)
            charge[i]+=0.15*units[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<"name :"<<name[i]<<"\t";
        cout<<"units :"<<units[i]<<"\t";
        cout<<"charge:"<<charge[i]<<endl;
    }
}
