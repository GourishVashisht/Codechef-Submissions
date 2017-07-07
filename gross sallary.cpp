#include<iostream>
using namespace std;
int main()
{
 int t=0,sallary=0;
 float hra=0.0,da=0.0,gross_sallary=0.0;
 cin>>t;
 for(int i=1;i<=t;i++)
 {
     cin>>sallary;
     if(sallary<1500)
     {
         hra=0.1*sallary;
         da=0.9*sallary;
         gross_sallary=sallary+hra+da;
         cout<<gross_sallary<<endl;
     }
     else if(sallary>=1500)
     {
         hra=500;
         da=0.98*sallary;
         gross_sallary=sallary+hra+da;
         cout<<gross_sallary<<endl;
     }
     sallary=hra=da=gross_sallary=0;
 }
 return 0;
}

