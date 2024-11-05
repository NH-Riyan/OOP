#include <bits/stdc++.h>
using namespace std;

void buyticket(string name,string number,int seat=1)
{
    cout<<"Tickets successfully purchased\n";
    cout<<"Name-"<<name;
    cout<<"\nPhone Number-"<<number;
    cout<<"\nNumber of Seats-"<<seat;
    cout<<"\nTotal"<<seat*100;
}


int main() {
    string name, phoneNumber;
    int numberOfSeats;

    // Take user input
    cout << "Enter your name: ";
    getline(cin,name);

    cout << "Enter your phone number: ";
    cin>>phoneNumber;

    cout << "Enter the number of seats (leave blank for 1): ";
    if (!(cin >> numberOfSeats)) {
        // If input fails, default to 1 seat
        numberOfSeats = 1;
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore remaining input
    }

    // Print the booking details
    buyticket(name, phoneNumber, numberOfSeats);

    return 0;
}

