#include<iostream>
#include<limits>
using namespace std;
int main()
{
  int k,j,n,t,sum=0;
  int ans=INT_MAX;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
      cin>>n;
      int arr[n];
      for(j=0;j<n;j++)
        cin>>arr[j];
      for(j=0;j<n;j++)
      {
          for(k=j+1;k<n;k++)
          {
           sum=arr[j]+arr[k];
           if(sum<ans)
           {
               ans=sum;
           }
          }
      }
      cout<<ans<<endl;
  }
 return 0;
}
