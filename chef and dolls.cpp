#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(int i=0;i<n;i=i+2)
        {
            if(arr[i]==arr[i+1])
	            continue;
	        else
	        {
	            cout<<arr[i]<<endl;
	            break;
	        }
        }
    }
    return 0;
}
