#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int e;
        /*int d,e;
        if(d!=1)
            {
                d=a[1]-a[0];
                cout<<a[0]<<endl;
            }
        else */
            e=a[n-1]-a[n-2];
            if(e!=1)
            {

                cout<<a[n-1]<<endl;
            }
        else
        {
            int f;
            f=0;
            for(int i=0;i<n-1;i++)
            {
                f=a[i+1]-a[i];
                if(f==0||f>1)
                {
                    cout<<a[i]<<endl;
                    break;
                }
            }

    }
    }
}
