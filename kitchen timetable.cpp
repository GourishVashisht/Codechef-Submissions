#include<iostream>
using namespace std;
int main()
{
    int i,t,n,arr1[10000],arr2[10000],count=0;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>arr2[i];
        }
        if(arr2[0]<=arr1[0])
        {
            count++;
        }
        for(i=0;i<n-1;i++)
        {
          if(arr2[i+1]<=(arr1[i+1]-arr1[i]))
          {
             count++;
          }
        }
     cout<<count<<endl;
     count=0;
    }
    return 0;
}
