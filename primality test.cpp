#include<iostream>
using namespace std;
int main()
{
  int t=0,n=0,count=0;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
      cin>>n;
      for(int j=2;j<=n/2;j++)
          {
              if(n%j==0)
              {
                  count=1;
                  break;
              }
          }
          if(count==0)
          {
              cout<<"yes"<<endl;
          }
          else
          {
              cout<<"no"<<endl;
          }
          n=0;
         // count=0;
  }
  return 0;
}
