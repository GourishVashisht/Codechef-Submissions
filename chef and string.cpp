#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i=0,t,arr[4]={0};
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        while(s[i]!= '\0')
        {
            if(s[i]=='C')
			   arr[0]+=1;
            else if(s[i]=='H'&& arr[0]>arr[1])
               arr[1]+=1;
            else if(s[i]=='E'&& arr[1]>arr[2])
               arr[2]+=1;
            else if(s[i]=='F'&& arr[2]>arr[3])
               arr[3]+=1;
            i++;
		}
		cout<<arr[3]<<endl;
		arr[0]=arr[1]=arr[3]=arr[3]=0;
		i=0;
    }
    return 0;
}
