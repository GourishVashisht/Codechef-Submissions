#include<iostream>
using namespace std;
bool func(string s)
{
    int w=0,len=s.size();
    cout<<len<<endl;
    for(int k=0;k<len;k++)
            {
                if(s[k]='1')
                    {
                        for(int m=k+1;m<len;m++)
                        {
                            if(s[m]=='0')
                                {w=1;break;}
                            else if(s[m]=='1')
                                w=0;
                        }
                    }
                    if(w==1)
                        return false;
                    else if(w==0)
                        return true;
            }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.size();
        int counti=0,j;
        for(int i=0;s[i]!='\0';)
        {
            if(s[i]=='1')
            {
                if(s[i+1]=='0')
                {
                counti++;
                j=i+1;
                while(s[j]=='0'&&s[j]!='\0')
                {

                    swap(s[i],s[j]);
                    i=j;
                    j++;
                    counti++;
                }
                cout<<counti<<endl;
                }
            }
            i=0;
            if(func(s)==true)
                break;
        }
        cout<<counti<<endl;
    }
}
