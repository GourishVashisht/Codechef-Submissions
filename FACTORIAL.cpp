#include<iostream>
using namespace std;
int fact(int&);
int zero(int&);
int main()
{
    int n,num[10];
    cout<<"ENTER THE NUMBER OF NUMBERS YOU WANT TO ENTER";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       cout<<"\n ENTER THE NUMBER ";
       cin>>num[i];
    }
    for(int k=1;k<=n;k++)
    {
        cout<<" \n the factorial of the number is :- "<<fact(num[k]);
        cout<<"\n the number of zeros is :- "<<zero(num[k]);
    }
    return 0;
}
int fact(int &num[i])
{
    float a=1;
    for(int j=&num[i];j>=1;j--)
    {
        a=a*j;
    }
    return a;
}
int zero(int &num[i])
{
   int c=0,count=0;
   c=num[i]%10;
   while(&num[i]>=0)
   {
   if(c==0)
   {
       count++;
   }
   &num[i]=&num[i]/10;
   c=&num[i]%10;
   }
   return count;
}



