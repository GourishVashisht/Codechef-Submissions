#include<iostream>
using namespace std;
int main()
{
    int t,i,c=0;
    int ch;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int in[k];
        for(int s=0;s<k;s++)
            in[s]=1;//={1};
        //int arr[k];
        int flag=0;
        for(i=0;i<n;i++)
        {
            c=0;
            int d;
            cin>>d;
            //int arr[d];
            for(int j=0;j<d;j++)
            {
                cin>>ch;
                //arr[j]=ch;
                in[ch-1]=0;
            //arr[i][j]='\0';
            }
            for(int h=0;h<k;h++)
            {
                if(in[h]==0)
                    c++;
            }
        /*char temp,c=0;
        for(u=0;u<n;u++)
        {
            c=0;
            for(int j=0;arr[u][j]!='\0';j++)
            {
                temp=arr[u][j]-'0';
                in[temp-1]=0;
                /*if(temp<=k)
                {
                    t[k-1]=0;
                    z++;
                }
            }
            for(int h=0;h<k;h++)
            {
                if(in[h]==0)
                    c++;
            }*/
            if(c==k && i<n-1)
                {flag=1;}//cout<<"some"<<endl;}
        }
        if(flag==1)
            cout<<"some"<<endl;
        else if(c!=k)
            cout<<"sad"<<endl;
        else if(c==k&&i==n)
            cout<<"all"<<endl;
    }
    return 0;
}
