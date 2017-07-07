#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t=0,num=0,root=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>num;
        root=sqrt(num);
        cout<<root<<endl;
    }
    return 0;
}
