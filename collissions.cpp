#include<iostream>
int comb(int,int);
using namespace std;
int main()
{
    int t,res,ans=0,n,m;
    cin>>t;
    while(t--)
    {
        ans=res=0;
        cin>>n>>m;
        int arr[n][m],a=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin>>arr[i][j];
        }
        for(int j=0;j<n;j++)
        {
            while(a==n-1)
            {
            for(int i=0;i<=j;)
            {
                if(arr[j][i]==1)
                 n++;
            j++;
            }
            a++;
            }
        int ans=comb(n,2);
        res=res+ans;
    }
    cout<<res<<endl;
    }
    return 0;

}
int comb(int n,int r)
    {
     if(n==2) return 1;
     if(r==1) return n;
     return (comb(n-1,2) + comb(n-1,2-1));
    }

