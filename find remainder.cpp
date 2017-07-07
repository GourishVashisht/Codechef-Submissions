#include<iostream>
using namespace std;
int main()
{
  int n=0,num=0,divisor=0,remain=0;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      cin>>num>>divisor;
      remain=num%divisor;
      cout<<remain<<endl;
  }
  return 0;
}

