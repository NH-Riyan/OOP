#include <iostream>
using namespace std;

class temp{
    float F;

public:
    void con(){
        cout<<"Enter temperature in Fahrenheit : ";
        cin>>F;
        float C=((F-32)*5)/9;
        cout<<"Celsius : "<<C;
    }
};

int main(){

temp t;
t.con();
}
