#include<iostream>
using namespace std;
int main()
{
    long long t,a,b,c,d,countv;
    cin>>t;
    while(t--)
    {
        a=b=c=d=countv=0;
        cin>>a>>b>>c>>d;
        /*te=b-a+1;
        ue=d-c+1;
        long long arr1[te],arr2[ue];
        long long i=0,j=0;
        for(long long x=a;x<=b;x++)
        {arr1[i]=x;i++;}
        for(long long y=c;y<=d;y++)
        {arr2[j]=y;j++;}*/
        for(long long i=a;i<=b;i++)
        {
            for(long long j=c;j<=d;j++)
            {
            if(i<j && j==c)
                {countv=countv+(d-c+1);
                break;}
            else if(i<j)
                countv++;
            else
                break;
            }
        }
        cout<<countv<<endl;
    }
    return 0;
}



