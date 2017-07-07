#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,count;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>s1>>s2;
        for(int i=0;s1[i]!='\0';i++)
        {
          if(s1[i]==s2[i])
            count++;
          else if(s1[i]=='?' && s2[i]!='?')
            count++;
          else if(s1[i]!='?' && s2[i]=='?')
            count++;
          else if(s1[i]=='?' && s2[i]=='?')
            count++;
        }
          if(count==s1.length())
            cout<<"Yes"<<endl;
          else
            cout<<"No"<<endl;
    }
    return 0;
}
