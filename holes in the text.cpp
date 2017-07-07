#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string arr;
    int t,count;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        count=0;
        cin>>arr;
        for(int k=0;arr[k]!='\0';k++)
        {
            if(arr[k]=='A'||arr[k]=='D'||arr[k]=='O'||arr[k]=='P'||arr[k]=='Q'||arr[k]=='R')
               count=count+1;
            else if (arr[k]=='B')
               count=count+2;
        }
        cout<<count<<endl;
    }
    return 0;
}
