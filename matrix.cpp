#include<iostream>
using namespace std;
int main()
{
    int arr[10][10],n=0,sum1=0,sum2=0,diff=0,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        cin>>arr[i][j];
        }
    }
    for(j=0;j<n;j++)
    {
        sum1=sum1+arr[j][j];
    }
    for(i=n-1,j=0;i>=0,j<n;i--,j++)
    {
        sum2=sum2+arr[i][j];
    }
    if(sum1>=sum2)
    diff=sum1-sum2;
    else
    diff=sum2-sum1;
    cout<<diff;
    return 0;
}
