#include<iostream>
using namespace std;
int main()
{
    int t,c;
    string s;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>s;
        for(int k=0;s[k]!=NULL;k+2)
        {
            if(s[k]==s[k+2])
            {
            if(s[k+1]==s[k+3])
                c++;
            else
                break;
            }
            else break;
        }
            cout<<"NO"<<endl;
    }
    return 0;
}
