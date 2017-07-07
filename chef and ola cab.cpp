#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long int x1,x2,y1,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    long int n;
    cin>>n;
    float r;
    cin>>r;
    float d;
    d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    n=n*d;
    if(n<=r)
        cout<<"yes";
    else cout<<"no";
}
