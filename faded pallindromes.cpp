#include<iostream>
using namespace std;
int main()
{
    int t,c,len,i,j;
    cin>>t;
    while(t--)
    {
        c=len=i=j=0;
        string s;
        cin>>s;
        len=s.length();
        if(len%2==0)
        {
            j=len/2;
            for(int i=0,k=len-1;i<j,k>=j;i++,k--)
            {
            if(s[i]==s[k]&&s[i]!='.'&&s[k]!='.')
                c++;
            else if(s[i]=='.'&&s[k]=='.')
                {s[i]='a';s[k]='a';c++;}
            else if(s[i]=='.')
                {s[i]=s[k];c++;}
            else if(s[k]=='.')
                {s[k]=s[i];c++;}
            else if(s[i]=='.'&&s[k]=='.')
                {s[i]='a';s[k]='a';c++;}
            else
                {c=0;break;}
            }
        if(c==j)
            cout<<s<<endl;
        else
            cout<<"-1"<<endl;
        }
        else
        {
            j=len/2;j=j+1;
            for(int i=0,k=len-1;i<j,k>=j-1;i++,k--)
            {
            if(s[i]==s[k]&&s[i]!=','&&s[k]!='.')
                c++;
            else if(s[i]=='.'&&s[k]=='.')
                {s[i]='a';s[k]='a';c++;}
            else if(s[i]=='.')
                {s[i]=s[k];c++;}
            else if(s[k]=='.')
                {s[k]=s[i];c++;}
            else
                {c=0;break;}
            }
        if(c==j)
            cout<<s<<endl;
        else
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
