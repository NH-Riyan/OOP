#include<bits/stdc++.h>
using namespace std;

int main()
{
    int vote,maxVote,
        Aparty = 0,
        Bparty = 0,
        Cparty = 0,
        Dparty = 0,
        Eparty = 0,
        spoiltBallots = 0;
   
    cout<<"\nPress 1 to vote 'A' party\nPress 2 to vote 'B' party"
        <<"\nPress 3 to vote 'C' party\nPress 4 to vote 'D' party"
        <<"\nPress 5 to vote 'E' party"<<endl;
    cout<<"\nEnter the number of total votes \n";
       cin>>maxVote;

    for(int i=0;i<maxVote;i++)
    {
        cout<<"Enter vote : ";
        cin>>vote;
        switch(vote)
        {
        case 1:
            Aparty++;
            break;
        case 2:
            Bparty++;
            break;
        case 3:
            Cparty++;
            break;
        case 4:
            Dparty++;
            break;
        case 5:
            Eparty++;
            break;
        default:
            spoiltBallots++;
            break;
        }
    }
    
    cout<<"\nParty 'A' gets "<<Aparty<<" votes \n";
    cout<<"\nParty 'B' gets "<<Bparty<<" votes \n";
    cout<<"\nParty 'C' gets "<<Cparty<<" votes \n";
    cout<<"\nParty 'D' gets "<<Dparty<<" votes \n";
    cout<<"\nParty 'E' gets "<<Eparty<<" votes \n";
    
    cout<<"\n"<<spoiltBallots<<" votes are spoilt ballots "<<endl;

    return 0;
}