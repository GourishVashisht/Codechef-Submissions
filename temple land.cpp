#include<iostream>
using namespace std;
int main()
{
    int s;
    cin>>s;
    while(s--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int j=n-1,d=0;
        if(n%2!=0)
        {
            if(a[0]==1)
            {
            for(int i=0;i<n/2;i++)
            {
                if(a[i]==a[j])
                    d=1;
                if(a[i+1]==a[i]+1)
                {
                    if(a[j-1]==a[j]+1)
                        {j--;continue;}
                    else {d=0;break;}
                }
                else {d=0;break;}
            }
            if(d==1)
                cout<<"yes"<<endl;
            else if(d==0)
                cout<<"no"<<endl;
            }
            else cout<<"no"<<endl;
            }
        else if(n%2==0)
            cout<<"no"<<endl;
    }
    return 0;
}
