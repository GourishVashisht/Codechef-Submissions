#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string a,b;
    int t=0,count=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b;
        for(int j=0;a[j]!='\0';j++)
        {
            for(int k=0;b[k]!='\0';k++)
            {
            if(a[j]==b[k])
            {
             count++;
             break;
            }
            }
        }
        if(count>0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        count=0;
    }
return 0;
}
