#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long n,l,r;
    cin>>n>>l>>r;
    long long a[n];
    for(long long p=0;p<n;p++)
        cin>>a[p];
    //sort(a,a+n);
    long long c=0,flag=0,i,j,k;
    int x,y,z;
    for(i=l;i<=r;i++)
    {
        flag=0;
           for(j=0;j<n;j++)
           {
               for(k=j+1;k<n;k++)
               {
                   x=(i+a[j])>a[k];
                   y=(a[j]+a[k]>i);
                   z=(a[k]+i>a[j]);
                   if(x==y)
                   {
                       if(y==z)
                       {
                    c++;
                    flag=1;
                    break;
                        }
                   }
               }
               if(flag==1)
                break;
            }
    }
    cout<<c<<endl;
}
