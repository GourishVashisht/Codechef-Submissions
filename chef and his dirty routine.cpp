#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        s1="CES";
        cin>>s2;
        int j=0,f=1;
        for(int i=0;i<s2.length();)
        {
            if(s1[j]==s2[i])
                {i++;f=1;}
            else j++;
            if(j==3)
                {f=0;break;}
        }
        if(f==1)
            cout<<"yes"<<endl;
        else if (f==0)
            cout<<"no"<<endl;
    }
}
