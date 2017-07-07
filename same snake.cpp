#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x11,y11,x12,y12,x21,y21,x22,y22;
        cin>>x11>>y11>>x12>>y12;
        cin>>x21>>y21>>x22>>y22;
        int c=0,d=0,e=0;

        if(x21==x11 && y21==y11)
            c=1;
        else if(x22==x11 && y22==y11)
            c=1;
        else if(x21==x12 && y21==y12)
            c=1;
        else if(x22==x12 && y22==y12)
            c=1;

        if(x21>=x11 && x21<=x12)
        {
            if(y21==y11 && y22==y11)
                d=1;
        }
        else if(x22>=x11 && x22<=x12)
        {
            if(y22==y11 && y21==y11)
                d=1;
        }

        if(x11>=x21 && x21<=x22)
        {
            if(y11==y12 && y11==y22)
                e=1;
        }
        else if(x12>=x21 && x12<=x22)
        {
            if(y12==y11 && y11==y22)
                e=1;
        }

        if(c==1 || d==1 ||e==1)
            cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
