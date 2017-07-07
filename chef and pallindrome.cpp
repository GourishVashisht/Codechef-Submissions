#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    int a[26]={0};
    for(int i=0;i<l;i++)
    {
        a[s[i]-97]++;
    }
    int x=0;
    for (int i=0;i<26;i++)
        if (a[i] & 1)
            x++;
    if(x==1)
        cout<<"YES";
    else
        cout<<"NO";
}
