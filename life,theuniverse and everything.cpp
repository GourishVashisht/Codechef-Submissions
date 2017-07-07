#include<iostream>
using namespace std;
int main()
{
 int n,array[50];
 cout<<"how many numbers you want to write";
 cin>>n;
 for(int i=1;i<=n;i++)
 {
     cin>>array[i];
 }
 for(int j=1;j<=n;j++)
 {
     if(array[j]!=42)
     {
         cout<<"\n"<<array[j];
     }
     else if(array[j]==42)
     {
         break;
     }
 }
 return 0;
}

