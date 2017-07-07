#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t=0,b=0;
    float no=0,x=0,area_of_triangle=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>b;
        x=sqrt(pow(b,2)/2);
        cout<<x;
        area_of_triangle=x*b/2;
        no=area_of_triangle/4;
        cout<<no;
        x=b=no=0;
    }
    return 0;
}
