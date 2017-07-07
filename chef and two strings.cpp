#include<iostream>
using namespace std;
int main()
{
    int t,mini,maxi;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        mini=maxi=0;
        cin>>s1;
        cin>>s2;
        for(int j=0;s1[j]!=NULL;j++)
        {
            if(s1[j]!=s2[j])
            {
                if(s1[j]!='?'&&s2[j]!='?')
                   mini++;
            }
        }
        for(int k=0;s1[k]!=NULL;k++)
        {
            if(s1[k]!=s2[k])
                maxi++;
            else if(s1[k]=='?'&&s2[k]=='?')
                maxi++;
        }
        cout<<mini<<" "<<maxi<<endl;
    }
     return 0;
}
