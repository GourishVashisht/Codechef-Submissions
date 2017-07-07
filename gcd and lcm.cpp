#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int no1,int no2)
{
	if (no2 == 0)
    return no1;

    gcd(no2,no1%no2);
}
int main()
{
 int t,no1,no2,lcm,gcd_;
 cin>>t;
 while(t--)
 {
     no1=no2=gcd_=lcm=0;
     cin>>no1>>no2;
     if(no1==0)
        gcd_=no2;
     else if(no2==0)
        gcd_=no1;
     else
        gcd_=gcd(no1,no2);
     lcm=(no1*no2)/gcd_;
     cout<<gcd_<<" "<<lcm<<endl;
 }
 return 0;
}

