#include<iostream>
using namespace std;
int main()
{
        int t;
        cin>>t;
        char input;
        for(int i=1;i<=t;i++)
        {
            cin>>input;
        if(input=='b'||input=='B')
            cout<<"BattleShip"<<endl;
        else if(input=='c'||input=='C')
            cout<<"Cruiser"<<endl;
        else if(input=='d'||input=='D')
            cout<<"Destroyer"<<endl;
        else if(input=='f'||input=='F')
            cout<<"Frigate"<<endl;
        }
    return 0;
}
