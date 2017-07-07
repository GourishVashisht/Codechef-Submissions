#include<iostream>
using namespace std;
int main()
{
    int n=0,no=0,mod=0,rev=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>no;
        while(no>0)
            {
                mod=no%10;
                rev=rev*10+mod;
                no=no/10;
            }
        cout<<rev<<endl;
        rev=0;
    }
    return 0;
}
