#include<iostream>
using namespace std;
int main()
{
    long int d,n,i,j,t,k,c,q;
    cin>>d;
    while(d--)
    {
        t=k=c=0;
        cin>>n;
        long int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
            for (i = 1; i < n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            if (a[j] < a[j-1])
            {
                t= a[j];
                a[j] = a[j-1];
                a[j-1] = t;
            }
            else
                break;
        }
    }
        for(q=0;q<n-1;q++)
        {
            c=a[q+1]-a[q];
            if(c<=1)
                k++;
            else
                break;
        }
        if(k==n-1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
