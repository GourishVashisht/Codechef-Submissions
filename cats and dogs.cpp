#include<iostream>
using namespace std;
#define lli long long int
int main()
{
    lli t,c=0,d=0,l=0;
    cin>>t;
    while(t--)
    {
        cin>>c>>d>>l;
        if(l%4!=0)
            cout<<"no"<<endl;
        else
        {
        if(c<=2*d)
        {
            if(l>=4*d && l<=(c+d)*4)
               cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
        else
        {
            if(l>=4*(d+c-2*d) && l<=(c+d)*4)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
        }
    }
}
