#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int p=0,s=0,counti=0;;
	    cin>>n;
	    char a[2][n];
	    for(int i=0;i<2;i++)
	    {
	        for(p=0;p<n;p++)
	        cin>>a[i][p];
	        if(a[i][p]=='*')
	            s++;
	    }
	    if(s==1)
	    cout<<0<<endl;
	    else
        {
            for(int k=0;k<n;k++)
            {
                if(a[0][k]=='*' && a[1][k]=='*')
                {counti=1;
                break;}
            }
            int i=0,f=0;
	        for(int j=0;j<n-1;)
	        {
	            //if()
	            if(a[i][j]=='*')
                {
                if(a[i][j+1]=='*')
                {
                 j=j+1;
                 counti++;
                 f=1;
                 continue;
                }
                if(a[(i+1)%2][j+1]=='*')
	            {
                 i=(i+1)%2;
                 j=j+1;
	             counti++;
	             continue;
	            }
	            else j++;
                }
                else if(a[i+1][j]=='*')
                {
                if(a[i][j+1]=='*')
                {
                 j=j+1;
                 counti++;
                 continue;
                }
                if(a[(i+1)%2][j+1]=='*')
	            {
                 i=(i+1)%2;
                 j=j+1;
	             counti++;
	             continue;
	            }
	            else j++;
                }
                else if(a[i+1][j]=='*' && f==1)
                    counti++;
	        }
	    cout<<counti<<endl;
	}
	}
	return 0;
}
