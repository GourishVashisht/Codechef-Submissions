#include<iostream>
using namespace std;
int main()
{
    int t,n,c[101],type[101][101],maxi,index,num[10],sum[101],counti,co;
    cin>>t;
    while(t--)
    {
        counti=co=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            index=maxi=0;
             counti=4;
            cin>>c[i];
            for(int z=0;z<10;z++)
                num[z]=0;
            for(int j=0;j<c[i];j++)
            {
                cin>>type[i][j];

                if (type[i][j]==1)
                    num[1]++;
                else if (type[i][j]==2)
                    num[2]++;
                else if (type[i][j]==3)
                    num[3]++;
                else if (type[i][j]==4)
                    num[4]++;
                else if (type[i][j]==5)
                    num[5]++;
                else if (type[i][j]==6)
                    num[6]++;

            }
            while(counti>3){
                counti=0;
            for(int k=1;k<7;k++)
            {
                if(num[k]!=0)
            {
             counti++;
                num[k]--;
            }
            }
            // sum[i]=c[i];
            if(counti==4)
                c[i]=c[i]+1;
            else if(counti==5)
                c[i]=c[i]+2;
            else if(counti==6)
                c[i]=c[i]+4;
        }
        sum[i]=c[i];
        }
        //maxi=sum[0];
        index=0;
        for(int q=0;q<n;q++)
        {
            if(sum[q]>maxi)
            {
                maxi=sum[q];
                index=q;
            }

        }
        for(int i=0;i<n;i++)
        {
            if(maxi==sum[i])
            co++;
        }
        if(co>=2)
            cout<<"tie"<<endl;
        else if(index==0)
            cout<<"chef"<<endl;
        else
            cout<<index+1<<endl;
    }
    return 0;
}
