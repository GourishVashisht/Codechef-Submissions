#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,n,ans=0,countr=0,countb=0,countg=0,a=0;
    int maxi;
    char arr[100000];
    cin>>t;
    for(int i=1;i<=t;i++)
    {
         ans=countr=countb=countg=0;
        cin>>n;
        for(int k=0;k<n;k++)
        {
            cin>>arr[k];
        }
        for(int j=1;arr[j]!='\0';j++)
        {
        if(arr[j]=='R')
            countr++;
        else if(arr[j]=='B')
            countb++;
        else if(arr[j]=='G')
            countg++;
        }
        if(countr>=countb &&countr>=countg)
            {
                maxi=countr;
            }
        else if(countb>=countr &&countb>=countg)
            {
                maxi=countb;
            }
        else if(countg>=countb &&countg>=countr)
            {
                maxi=countg;
            }
        a=strlen(arr);
        ans=a-maxi-1;
        cout<<ans<<endl;

    }
        return 0;
}

