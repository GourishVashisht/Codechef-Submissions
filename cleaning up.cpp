#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int arr[m],arrc[n],arra[n],v=0,w=0,k=0;
        for(int i=0;i<m;i++)
            cin>>arr[i];
        sort(arr,arr+m);
        int x=1;
        for(int j=1;j<=n;j++)
        {
            if(arr[k]!=j)
            {
             x=x%10;
             if(x==1)
             {
                 arrc[v]=j;
                 x++;
                 v++;
             }
             else if(x==2)
             {
                 arra[w]=j;
                 x--;
                 w++;
             }
             k++;
            }
        }
        for(int i=0;i<v;i++)
            cout<<arrc[i]<<" ";
        cout<<endl;
        for(int i=0;i<w;i++)
            cout<<arra[i]<<" ";
    }
 return 0;
}
