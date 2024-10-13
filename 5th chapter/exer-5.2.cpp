#include<iostream>
using namespace std;
class vector
{
	int *v;
	int dimension;

public:
	void create_vector(void);
	void multiply(float value);
	void update_value(int i);
	void display_vec(void);
};

void vector::display_vec()
{
	cout<<"\n( ";
	for(int i=1;i<dimension;i++)
		cout<<v[i]<<" ,";
	cout<<v[dimension]<<" )\n";
}

void vector::update_value(int i)
{
     int value;
     cout<<"enter new value-";
     cin>>value;
	v[i]=value;
	return ;
}


void vector::multiply(float value)
{
      for(int i=0;i<=dimension;i++)
		v[i]=v[i]*value;
}


void vector::create_vector()
{
	cout<<"\nEnter the total element of vector : ";
	cin>>dimension;
	v= new int [dimension];
	cout<<"\nEnter all elements of vector : \n";
	for(int i=1;i<=dimension;i++)
	{
		cout<<"Enter "<<i<<" element : ";
		cin>>v[i];
	}
}
int main()
{
	int i,value,choice;
    bool con=true;
	vector vector1;
	vector1.create_vector();
	 do
	{
		
			cout<<"1.Modify Value\n2.Multiply by a scalar\n3.display the vector\n4.Exit\n";
		cout<<"\n\nEnter your option :";
        cin>>choice;
		switch(choice)
		{
			case 1:
                     
                    cin>>i;
					vector1.update_value(i);
                    break;
			case 2:
					cout<<"\nEnter scalar value : ";
					cin>>value;
					cout<<"\nMultiplying vector by "<<value;
					vector1.multiply(value);
					vector1.display_vec();
					break;
			case 3:
					vector1.display_vec();
					break;
            case 4:
                   con=false;
                   break;        
        
					return 0;
		}
	}while(con);
    

}