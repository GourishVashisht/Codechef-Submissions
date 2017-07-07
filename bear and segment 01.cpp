#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    int slen=s.size();
    int f=0,c=0;
    for(int i=0;i<slen;i++)
    {
        if(s[i]=='0')
        {
            if(c==0)
               f=0;
            else if(c!=0)
               f=2;
        }
        else if(s[i]=='1')
        {
            if(f==2)
              {f=3;break;}
            else
              {f=1;c++;}
        }
    }
    if(f==0 || f==3)
        cout<<"NO\n";
    else if(f==1 || f==2)
        cout<<"YES\n";
    }
    return 0;
}
