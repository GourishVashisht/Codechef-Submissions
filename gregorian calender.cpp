#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int t,year,a,diff;
    cin>>t;
    while(t--)
    {
        year=a=diff=0;
        cin>>year;
        diff=2001-year;
        if(diff<0)
        {
          a=abs(diff);
          for(int j=2001;j<year;j++)
          {
          if(((j%4==0)&&(j%100!=0))||(j%400==0))
            {
                a++;
            }
          }
        a=a%7;
       switch(a)
        {
        case 1:
            cout<<"tuesday"<<endl;break;
        case 2:
            cout<<"wednesday"<<endl;break;
        case 3:
            cout<<"thursday"<<endl;break;
        case 4:
            cout<<"friday"<<endl;break;
        case 5:
            cout<<"saturday"<<endl;break;
        case 6:
            cout<<"sunday"<<endl;break;
        case 7:
            cout<<"monday"<<endl;break;
        }
        }
        if(diff>0)
        {
            a=abs(diff);
        for(int j=year;j<2001;j++)
        {
          if(((j%4==0)&&(j%100!=0))||(j%400==0))
            {
                a++;
            }
        }
        a=a%7;
        switch(a)
        {
        case 1:
            cout<<"sunday"<<endl;break;
        case 2:
            cout<<"saturday"<<endl;break;
        case 3:
            cout<<"friday"<<endl;break;
        case 4:
            cout<<"thursday"<<endl;break;
        case 5:
            cout<<"wednesday"<<endl;break;
        case 6:
            cout<<"tuesday"<<endl;break;
        case 7:
            cout<<"monday"<<endl;break;
        }
        }
        if(diff==0)
            cout<<"monday"<<endl;
    }
    return 0;
}
