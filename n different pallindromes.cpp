#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    char k='a';
    while(n--)
    {
        cout<<k;
        if(k=='z')
            k='a';

        else{
            k++;
        }
    }
    cout<<endl;
    }
}
