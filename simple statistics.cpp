#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
    int t,n,k,sum=0;
    double avg=0;
    cin>>t;
    while(t--)
    {
        sum=avg=0;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(int j=k;j<n-k;j++)
            sum=arr[j]+sum;
        avg=(double)sum/(n-(2*k));
        printf("%0.6f\n",avg);
    }
    return 0;
}
