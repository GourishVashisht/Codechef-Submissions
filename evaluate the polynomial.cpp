#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,q,sum;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n+1;i++)
        cin>>a[i];
    cin>>q;
    int b[q];
    for(int i=0;i<q;i++)
        cin>>b[i];
      for(int j=0;j<q;j++)
      {
      sum=0;
      sum=a[0];
      for(int i=1;i<n+1;i++)
      {
          sum=sum+((a[i])*pow(b[j],i));
      }
      sum=sum%786433;
    cout<<sum<<endl;
      }
    return 0;
}
