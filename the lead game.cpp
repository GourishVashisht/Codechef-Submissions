#include<iostream>
using namespace std;
int main()
{
    int n=0,p1=0,p2=0,win=0,winner=0,diff=0,difference=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p1;
        cin>>p2;
        if(p1>p2)
        {
            diff=p1-p2;
            win=1;
        }
        else
        {
            diff=p2-p1;
            win=2;
        }
        if(difference<diff)
        {
            difference=diff;
            winner=win;
        }
        else
        {
            difference=difference;
            winner=winner;
        }
    }
    cout<<winner<<" "<<difference;
    return 0;
}
