#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long int n,k;
    cin>>n;
    cin>>k;
    long int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int t;
    t=k-a[0];
    cout<<t;
}
