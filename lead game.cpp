#include<iostream>
using namespace std;
int main()
{
    long int i,n=0,w=0,l=0,pre=0,s1=0,s2=0;
    cin>>n;
    long int arr1=0,arr2=0;
    for(i=1;i<=n;i++)
    {
        cin>>arr1>>arr2;
        s1+=arr1;
        s2+=arr2;
        if(s1>s2)
        {
            w=1;
            l=s1-s2;
            if(l>pre)
               {

                pre=l;
                }
        }
        if(s2>s1)
        {
            w=2;
            l=s2-s1;
            if(l>pre)
                {pre=l;
                }
        }
    }
    cout<<w<<" "<<pre;
    return 0;
}
