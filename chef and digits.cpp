#include<iostream>
using namespace std;
int main()
{
    int e,l,r,t=0,c,counti=0;
    cin>>e;
    while(e--)
    {
    cin>>l>>r;
    int arr1[10],arr2[10]={0};
    for(int j=0;j<10;j++)
        cin>>arr1[j];
        counti=0;
    for(int i=l;i<=r;i++)
    {
        c=0;
        t=i;
        while(t>0)
        {
            r=t%10;
            arr2[r]++;
            t=t/10;
        }
        cout<<t<<endl;
        for(int k=0;k<10;k++)
        {
                if(arr2[k]!=0)
                {
                    if(arr1[k]==arr2[k])
                        {c=1;}

                }
        }
        if(c==0)
            counti++;
            cout<<counti<<endl;
    }
    cout<<counti<<endl;
    }
}
