#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> x(n);
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>x[i];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int f=0;
        int sum1[2]={0,0};
        int k=0;
        int o=2;
        while(o--)
        {
            for(int i=0;i<n;i++)
            {
                if(f==0)
                {sum1[k]=sum1[k]+x[i];f=1;}
                else if(f==1)
                {sum1[k]=sum1[k]+a[i];f=0;}
            }
            k++;
            f=1;
        }
        sort(sum1,sum1+2);
        cout<<sum1[0]<<endl;
    }
}
