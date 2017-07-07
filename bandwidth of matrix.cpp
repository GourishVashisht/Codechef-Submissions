#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
struct pair1
{
    int first;
    int second;
};
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++)
        {for(int j=0;j<n;j++)
            cin>>a[i][j];
            //cout<<a[i][j];
        }
        //pair<int,int> p[n*n];
        struct pair1 p[n*n];
        int k=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
            p[k].first=abs(i-j);
            p[k].second=a[i][j];
         //   cout<<p[k].first<<" "<<p[k].second<<endl;
            k++;
            }
        }
        int x,c=0,r;
        x=0;
        while(1)
        {
            c=0;
        for(r=0;r<(n*n);r++)
        {
            //cout<<p[r].first<<" "<<x<<" ";
             if(p[r].first<=x)
                {c=c++;
              //  cout<<"e";
                continue;}
             else if(p[r].first>x && p[r].second==0)
                {c++;
                //cout<<"f";
                continue;}
             else if(p[r].first>x && p[r].second!=0)
            {
                for(int j=0;j<(n*n);j++)
                {
                    if(p[j].first<=x && p[j].second==0)
                    {
                  //      cout<<"t";
                        int sw=p[j].second;
                        p[j].second=p[r].second;
                        p[r].second=sw;
                        c++;
                        break;
                    }
                    else continue;
                }
            }
            //cout<<"r";
                if(p[r].second!=0)
                   {x++;
                   //cout<<x<<endl;
                   break;}
                   //cout<<"t";
        }
       // cout<<c<<endl;
        if(c==n*n)
        {
            cout<<x<<endl;
            break;
        }
        else if(x==n)
        {
            cout<<x-1<<endl;
            break;
        }
        }
    }
}
