#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        if(b==a+2||a==b+2)
            cout<<"YES"<<endl;
        else if(a>b)
        {
            int i=(b-1)/2;
            if(2*i+2==a)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(b>a)
        {
            int j=(a-1)/2;
            if(2*j+2==b)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
