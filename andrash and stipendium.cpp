#include<iostream>
using namespace std;
int main()
{
    int t,n,sum=0,check1=0,check=0,counti=0;
    cin>>t;
    while(t--)
    {
        sum=check1=check=counti=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
            if(arr[i]==5)
                check=1;
        }
        float avg=(float)sum/n;
        if(avg>=4.0)
        {
            check1=1;
        }
        if(check==1 && check1==1)
        {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==2)
            {
                counti=1;
                break;
            }
        }
        }
        if(check==1 && check1==1 && counti==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
