#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,money,i,j;
        money=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(j=0;j<n;j++)
        {
            if(a[j]==0)
                break;
        }
        for(int k=j;k<n;k++)
        {
            if(a[k]==0)
                money=money+1100;
            else if(a[k]==1)
            money=money+100;
        }
        cout<<money<<endl;
    }
}
