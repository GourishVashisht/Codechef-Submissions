#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int s_max=INT_MIN;
        int j,q=0,s=0,count=0;;
        for(int i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                s=(s+arr[j])%p;
                if(s>s_max)
                    {s_max=s;
                    count=1;}
                else if(s==s_max)
                    count++;
            }
            s=0;
        }
        cout<<s_max<<" "<<count<<endl;
    }
    return 0;
}
