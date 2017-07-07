#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,counti=0;
        double l;
        cin>>n;
        int h=n/2048;
        counti=h;
        n=n%2048;
        l=log(n)/log(2);
        //cout<<l<<endl;
        int temp=(int)(l);
        //cout<<temp;
        if(ceil(l)-floor(l)==0)
        {
            counti=counti+1;
        }
        else{

        while(n!=0)
        {
            if(pow(2,temp)>n)
            {
            temp--;
            continue;
            }
            else
            {
                n=n-pow(2,temp);
                temp--;
                counti++;
            }
        }
        }
       cout<<counti<<endl;
    }
}
