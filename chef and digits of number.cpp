#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,c=0,count_0=0,count_1=0;
    cin>>t;
    while(t--)
    {
        count_0=count_1=0;
        string a;
        cin>>a;
        c=a.length();
        for(int i=0;i<c;i++)
        {
            if(a[i]=='0')
            {
                count_0++;
            }
            else if(a[i]=='1')
                count_1++;
        }
        if(count_0==1 || count_1==1)
                cout<<"Yes"<<endl;
        else
                cout<<"No"<<endl;

    }
    return 0;
}
