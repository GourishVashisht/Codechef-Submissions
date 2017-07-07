#include<iostream>
using namespace std;
int main()
{
    int t,a,b,min_val=0,max_val=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
            min_val=a;
        else
            min_val=b;
        max_val=a+b;
        cout<<min_val<<" "<<max_val<<endl;
    }
    return 0;
}

