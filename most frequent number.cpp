#include<iostream>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long a[n];
    for(int j=0;j<n;j++)
        cin>>a[j];
    while(m--)
    {

        long long l,r,k;
        cin>>l>>r>>k;
        long long i,c,flag,temp;
        c=1;flag=0;
        for(i=l-1;i<r-1;i++)
        {
            if(a[i+1]==a[i])
            {
                c++;
                if(c>=k)
                {
                    temp=a[i];
                    flag=1;
                    break;
                }
            }
            else
                c=1;
        }
        if(flag==1)
            cout<<temp<<endl;
        else
            cout<<"-1"<<endl;
    }
}
