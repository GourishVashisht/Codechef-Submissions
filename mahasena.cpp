#include<iostream>
using namespace std;
int main()
{
    int t,n,count_lucky=0,count_unlucky=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]%2==0)
            count_lucky++;
        else
            count_unlucky++;
    }
    if(count_lucky > count_unlucky)
        cout<<"READY FOR BATTLE";
    else
        cout<<"NOT READY";
    return 0;
}
