#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    while(r--)
    {
        int l;
        cin>>l;
        char a[l+1];
        for(int i=0;i<l;i++)
            cin>>a[i];
        int c=0;
        for(int j=0;j<l;j++)
        {
            /*if(a[j]=='H')
                {f++;}
            else if(a[j]=='T' && f==1)
                f=0;
            else if(a[j]=='.')
                continue;
            else if(a[j]=='T')
            {f=1;break;}
            else if(f>=1)
            {f=1;break;}*/
            if(a[j]=='H')
            c++;
            else if(a[j]=='T')
            c--;
            if(c==2 || c<0)
            {c=1;break;}
        }
        if(c==0)
            cout<<"Valid"<<endl;
        if(c==1)
            cout<<"Invalid"<<endl;
    }
    return 0;
}
