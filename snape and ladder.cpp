#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,b,ls;
    float min=0,max=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>b>>ls;
        min=sqrt((ls*ls)-(b*b));
        if(ls>b)
        {
        max=sqrt((ls*ls)+(b*b));
        }
        else if(b>ls)
        {
        max=sqrt((b*b)+(ls*ls));
        }
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}
